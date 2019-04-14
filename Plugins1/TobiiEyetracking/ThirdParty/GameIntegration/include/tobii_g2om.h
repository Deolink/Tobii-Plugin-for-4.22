/* Copyrighted Tobii AB, 2018. Property of Tobii AB. */

#ifndef tobii_g2om_h_included
#define tobii_g2om_h_included

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#define G2OM_API __declspec( dllimport )
#define G2OM_CALL __cdecl
#elif __GNUC__ >= 4
#define G2OM_API __attribute__((visibility("default")))
#define G2OM_CALL
#else
#define G2OM_API
#define G2OM_CALL
#endif

	typedef enum {
		G2OM_RESULT_OK = 0,
		G2OM_RESULT_NULL_POINTER_PASSED = -1,
		G2OM_RESULT_INTERNAL_ERROR = -10,
		G2OM_RESULT_THREAD_POOL_ERROR = -20,
		G2OM_RESULT_INDEX_OUT_OF_BOUNDS = -30,
		G2OM_RESULT_INTERNAL_CONVERSION_ERROR = -40,
		G2OM_RESULT_LOG_FILE_ERROR = -50,
		G2OM_RESULT_NOT_IMPLEMENTED = -1000,
	} g2om_result;

	typedef struct {
		uint32_t major;
		uint32_t minor;
		uint32_t build_version;
	} g2om_version;

	typedef struct g2om_context g2om_context;

	typedef struct {
		float x;
		float y;
		float z;
	} g2om_vector;

	typedef struct {
		float data[16];
	} g2om_matrix;

	typedef struct {
		uint64_t id;
		g2om_vector max_local_space;
		g2om_vector min_local_space;
		g2om_matrix world_to_local_matrix;
		g2om_matrix local_to_world_matrix;
	} g2om_candidate;

	typedef struct {
		g2om_vector origin;
		g2om_vector direction;
	} g2om_ray;

	typedef struct {
		g2om_ray ray;
		bool is_valid;
	} g2om_gaze_ray;

	typedef struct {
		float timestamp_in_s;
		g2om_gaze_ray combined;
		g2om_gaze_ray left_eye;
		g2om_gaze_ray right_eye;
	} g2om_gaze_data;

	typedef struct {
		bool is_valid;
		uint64_t id;
	} g2om_raycast;

	typedef struct {
		g2om_raycast combined;
		g2om_raycast left_eye;
		g2om_raycast right_eye;
	} g2om_raycast_result;

	typedef struct {
		uint64_t id;
		float score;
		g2om_gaze_ray adjusted_combined_ray;
		g2om_gaze_ray adjusted_left_ray;
		g2om_gaze_ray adjusted_right_ray;
	} g2om_candidate_result;

	typedef enum {
		G2OM_THREAD_COUNT_ONE = 1,
		G2OM_THREAD_COUNT_TWO = 2,
		G2OM_THREAD_COUNT_THREE = 3,
		G2OM_THREAD_COUNT_FOUR = 4,
	} g2om_thread_count;

	typedef enum {
		G2OM_CORNERS_FLL = 0,    // Front Lower Left
		G2OM_CORNERS_FUL,        // Front Upper Left
		G2OM_CORNERS_FUR,        // Front Upper Right
		G2OM_CORNERS_FLR,        // Front Lower Right
		G2OM_CORNERS_BLL,        // Back Lower Left
		G2OM_CORNERS_BUL,        // Back Upper Left
		G2OM_CORNERS_BUR,        // Back Upper Right
		G2OM_CORNERS_BLR,        // Back Lower Right
		G2OM_CORNERS_COUNT
	} g2om_corners;

	G2OM_API g2om_result G2OM_CALL g2om_get_version(g2om_version *version_ptr);

	G2OM_API g2om_result G2OM_CALL g2om_context_create(
		g2om_context **context_ptr,
		uint32_t initial_capacity);

	G2OM_API g2om_result G2OM_CALL g2om_context_destroy(g2om_context **context_ptr);

	G2OM_API g2om_result G2OM_CALL g2om_process(
		g2om_context *context_ptr,
		g2om_gaze_data *gaze_data_ptr,
		g2om_raycast_result *raycast_ptr,
		uint32_t candidates_count,
		g2om_candidate *candidates_ptr,
		g2om_candidate_result *candidate_results);

	G2OM_API g2om_result G2OM_CALL g2om_set_max_thread_count(
		g2om_context *context_ptr,
		g2om_thread_count thread_count);

	G2OM_API g2om_result G2OM_CALL g2om_get_worldspace_corner_of_candidate(
		g2om_candidate *candidate_ptr,
		uint32_t corners_length,
		g2om_vector *corners_ptr);

#ifdef __cplusplus
}
#endif

#endif tobii_g2om_h_included

/**
# g2om_context_create
Initializes G2OM, with provided initial capacity of individual objects. It is possible to have multiple G2OM instances at one time.
# Remarks
Before any other API function can be invoked with the exception of [g2om_get_version()] and [g2om_get_worldspace_corner_of_candidate()], the API needs to be set up before use, by calling `g2om_context_create()`.
The resulting [Context] instance is passed explicitly to most functions. When creating an API instance, you also set the `initial_capacity` for storing object data internally.
# Arguments
`context_ptr` must be a pointer to a variable of the type [Context]*, that is, a pointer to a [Context] pointer. This variable will be filled in with a pointer to the created instance. [Context] is an opaque type, and only its declaration is available in the API.
`initial_capacity` if exceeded will allocate double the exceeded value.
# Return value
If API instance creation was successful, `g2om_context_create()` returns [Result::Ok] (0). If creation failed `g2om_context_create()` returns one of the following:
[Result::NullPointerPassed] (-1) - The `context` parameter was passed in as `NULL`.
[Result::InternalError] (-10) -  Some unexpected internal error occured. This error should normally not be returned, so if it is please contact support.
# Example
```c
#include <tobii/tobii_g2om.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	g2om_context* context;
	int32_t intial_capacity = 10;
	g2om_result result = g2om_context_create( &context, intial_capacity );
	if( result != G2OM_RESULT_OK )
		printf("Operation failed with error code: %d\n", result);
	result = g2om_context_destroy( &context );
	if( result != G2OM_RESULT_OK )
		printf("Operation failed with error code: %d\n", result);
}
```
*/

/**
# g2om_context_destroy
Destroy the G2OM instance.
# Remarks
When creating an instance with [g2om_context_create()], some system resources are acquired. When finished using the API (typically during the shutdown process), `g2om_context_destroy()` should be called to destroy the instance and ensure that those resources are released.
`g2om_context_destroy()` should only be called if [g2om_context_create()] completed successfully.
# Arguments
`context_ptr` must be a pointer to a pointer to a valid [Context] instance, that is a pointer to a [Context]*, as created by [g2om_context_create()].
# Return value
If the call was successful, `g2om_context_destroy()` returns [Result::Ok] (0), otherwise it can return [Result::NullPointerPassed] (-1) if `context_ptr` parameter was passed in as `NULL`.
*/

/**
# g2om_get_version
Get the current version of the API.
# Remarks
`g2om_get_version()` can be used to query the version of the tobii_g2om dll currently used.
# Arguments
`version_ptr` is a pointer to a [Version] variable to receive the current version numbers.
# Return value
If the call was successful, `g2om_get_version()` returns [Result::Ok] (0), otherwise it can return [Result::NullPointerPassed] (-1) if `version_ptr` parameter was passed in as `NULL`.
# Example
#include <tobii/tobii_g2om.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	g2om_version version;
	g2om_result result = g2om_get_version( &version );
	if( result != G2OM_RESULT_OK )
		printf("Operation failed with error code: %d\n", result);
	printf("Version: %d.%d.%d", version.major, version.minor, version.build_version);
}

*/

/**
# g2om_get_worldspace_corner_of_candidate
Transforms the corner points of the provided candidate's AABB to worldspace, and output the resulting 8 corners.
# Remarks
`g2om_get_worldspace_corner_of_candidate()` can be used to debug. It's use is to make sure that the matrices used to transform to and from worldspace are correct.
# Arguments
`candidate_ptr` must be a pointer to a valid [Candidate] instance as created by the user.
`corners_ptr` is a pointer to a [Vector3f32] array, which must be of size 8, to receive the transformed corners.
# Return value
If the call was successful, `g2om_get_worldspace_corner_of_candidate()` returns [Result::Ok] (0), otherwise it can return [Result::NullPointerPassed] (-1) if any of the parameters was passed in as `NULL`.
*/

/**
# g2om_process
Takes gaze data, information about objects hit by raycasts and candidates (gaze aware objects) and sends back a result for each candidate.
# Remarks
G2OM does not do any kind of background processing. This means that in order to receive any results from the API, the user application needs to manually initiate the process, and this is done by calling `g2om_process()`.
The recommended way to use `g2om_process()` is to call it directly from the users update loop before the result is needed and at the same rate as the user application will use it.
# Arguments
`context_ptr` must be a pointer to a valid [Context] instance as created by calling [g2om_context_create()].
`gaze_data_ptr` must be a pointer to a valid [GazeData] instance as created by the user.
`raycast_ptr` must be a pointer to a valid [RaycastResult] instance as created by the user.
`candidates_count` must be a u32 designating the length of the `candidates_ptr` array.
`candidates_ptr` must be a pointer to a valid [Candidate] array instance as created by the user.
`candidate_results` must be a pointer to a valid [CandidateResult] array instance as created by the user, which will receive it's values from this function. `candidate_results` length **MUST** match `candidates_ptr` length.
# Return value
If the process is successful, `g2om_process()` returns [Result::Ok] (0).
If the call fails `g2om_process()` returns [Result::NullPointerPassed] (-1) if any of the following parameter was passed in as `NULL`: `context_ptr`, `gaze_data_ptr`, `raycast_ptr`, `candidates_ptr`, `candidate_results`.
# Example
```c
#include <tobii/tobii_g2om.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	g2om_context* context;
	int32_t intial_capacity = 10;
	g2om_result result = g2om_context_create( &context, intial_capacity );
	if( result != G2OM_RESULT_OK )
		printf("Operation failed with error code: %d\n", result);
	// Get this data from your eye tracker:
	g2om_gaze_data gaze_data = {0};
	// fill with data from raycasting in your game engine with gaze ray
	// should only be valid if object hit was gazeaware/g2om_candidate
	g2om_raycast_result raycast_result = {0};
	// fill with candidates/objects from your game which should be gazeaware.
	g2om_candidate candidate = {0};
	g2om_candidate candidates[1] = {
		candidate
	};
	g2om_candidate *candidates_ptr = candidates;
	uint32_t candidate_count = 1;
	// this value will be filled by g2om_process
	g2om_candidate_result candidate_result = {0};
	// this array has to be the same size as candidates.
	g2om_candidate_result candidate_results[1] = {
		candidate_result
	};
	g2om_candidate_result *candidate_results_ptr = candidate_results;
	uint32_t result_count = 1;
	if(result_count != candidate_count);
		printf("Mismatch in array lengths!");
	result = g2om_process( context, &gaze_data, &raycast_result, candidate_count, candidates_ptr, candidate_results_ptr );
	if( result != G2OM_RESULT_OK )
		printf("Operation failed with error code: %d\n", result);
	g2om_candidate_result winner = candidate_results[0]; // the results are sorted, so the first element is the highest scoring.
	// --> use the results/winner here <--
	printf("%ju has gaze focus.", winner.id);
	result = g2om_context_destroy( &context );
	if( result != G2OM_RESULT_OK )
		printf("Operation failed with error code: %d\n", result);
}
```
*/

/**
# g2om_set_max_thread_count
Sets how many threads G2OM is allowed to use internally during a call to [g2om_process()].
# Remarks
G2OM by default uses multiple threads during [g2om_process()] to improve calculation time. If you want to control how G2OM manages it's threads you can change it.
# Arguments
`thread_count` is a value of type [ThreadCount]. G2OM defaults to [ThreadCount::Two].
# Return value
If the call was successful, `g2om_set_max_thread_count()` returns [Result::Ok] (0), otherwise it can return [Result::NullPointerPassed] (-1) if `context_ptr` parameter was passed in as `NULL`.
*/