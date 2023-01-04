// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from class_test_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "class_test_interfaces/action/detail/fibonacci__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
class_test_interfaces__action__Fibonacci_Goal__init(class_test_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // number
  return true;
}

void
class_test_interfaces__action__Fibonacci_Goal__fini(class_test_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return;
  }
  // number
}

bool
class_test_interfaces__action__Fibonacci_Goal__are_equal(const class_test_interfaces__action__Fibonacci_Goal * lhs, const class_test_interfaces__action__Fibonacci_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_Goal__copy(
  const class_test_interfaces__action__Fibonacci_Goal * input,
  class_test_interfaces__action__Fibonacci_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

class_test_interfaces__action__Fibonacci_Goal *
class_test_interfaces__action__Fibonacci_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Goal * msg = (class_test_interfaces__action__Fibonacci_Goal *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_Goal));
  bool success = class_test_interfaces__action__Fibonacci_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_Goal__destroy(class_test_interfaces__action__Fibonacci_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_Goal__Sequence__init(class_test_interfaces__action__Fibonacci_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Goal * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_Goal *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_Goal__Sequence__fini(class_test_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_Goal__Sequence *
class_test_interfaces__action__Fibonacci_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Goal__Sequence * array = (class_test_interfaces__action__Fibonacci_Goal__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_Goal__Sequence__destroy(class_test_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_Goal__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_Goal__Sequence * lhs, const class_test_interfaces__action__Fibonacci_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_Goal__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_Goal__Sequence * input,
  class_test_interfaces__action__Fibonacci_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_Goal);
    class_test_interfaces__action__Fibonacci_Goal * data =
      (class_test_interfaces__action__Fibonacci_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
class_test_interfaces__action__Fibonacci_Result__init(class_test_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return false;
  }
  // array
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->array, 0)) {
    class_test_interfaces__action__Fibonacci_Result__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_Result__fini(class_test_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return;
  }
  // array
  rosidl_runtime_c__int32__Sequence__fini(&msg->array);
}

bool
class_test_interfaces__action__Fibonacci_Result__are_equal(const class_test_interfaces__action__Fibonacci_Result * lhs, const class_test_interfaces__action__Fibonacci_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // array
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->array), &(rhs->array)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_Result__copy(
  const class_test_interfaces__action__Fibonacci_Result * input,
  class_test_interfaces__action__Fibonacci_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // array
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->array), &(output->array)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_Result *
class_test_interfaces__action__Fibonacci_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Result * msg = (class_test_interfaces__action__Fibonacci_Result *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_Result));
  bool success = class_test_interfaces__action__Fibonacci_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_Result__destroy(class_test_interfaces__action__Fibonacci_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_Result__Sequence__init(class_test_interfaces__action__Fibonacci_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Result * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_Result *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_Result__Sequence__fini(class_test_interfaces__action__Fibonacci_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_Result__Sequence *
class_test_interfaces__action__Fibonacci_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Result__Sequence * array = (class_test_interfaces__action__Fibonacci_Result__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_Result__Sequence__destroy(class_test_interfaces__action__Fibonacci_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_Result__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_Result__Sequence * lhs, const class_test_interfaces__action__Fibonacci_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_Result__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_Result__Sequence * input,
  class_test_interfaces__action__Fibonacci_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_Result);
    class_test_interfaces__action__Fibonacci_Result * data =
      (class_test_interfaces__action__Fibonacci_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `part_array`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
class_test_interfaces__action__Fibonacci_Feedback__init(class_test_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // part_array
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->part_array, 0)) {
    class_test_interfaces__action__Fibonacci_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_Feedback__fini(class_test_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // part_array
  rosidl_runtime_c__int32__Sequence__fini(&msg->part_array);
}

bool
class_test_interfaces__action__Fibonacci_Feedback__are_equal(const class_test_interfaces__action__Fibonacci_Feedback * lhs, const class_test_interfaces__action__Fibonacci_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // part_array
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->part_array), &(rhs->part_array)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_Feedback__copy(
  const class_test_interfaces__action__Fibonacci_Feedback * input,
  class_test_interfaces__action__Fibonacci_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // part_array
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->part_array), &(output->part_array)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_Feedback *
class_test_interfaces__action__Fibonacci_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Feedback * msg = (class_test_interfaces__action__Fibonacci_Feedback *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_Feedback));
  bool success = class_test_interfaces__action__Fibonacci_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_Feedback__destroy(class_test_interfaces__action__Fibonacci_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_Feedback__Sequence__init(class_test_interfaces__action__Fibonacci_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Feedback * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_Feedback *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_Feedback__Sequence__fini(class_test_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_Feedback__Sequence *
class_test_interfaces__action__Fibonacci_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_Feedback__Sequence * array = (class_test_interfaces__action__Fibonacci_Feedback__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_Feedback__Sequence__destroy(class_test_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_Feedback__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_Feedback__Sequence * lhs, const class_test_interfaces__action__Fibonacci_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_Feedback__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_Feedback__Sequence * input,
  class_test_interfaces__action__Fibonacci_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_Feedback);
    class_test_interfaces__action__Fibonacci_Feedback * data =
      (class_test_interfaces__action__Fibonacci_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "class_test_interfaces/action/detail/fibonacci__functions.h"

bool
class_test_interfaces__action__Fibonacci_SendGoal_Request__init(class_test_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!class_test_interfaces__action__Fibonacci_Goal__init(&msg->goal)) {
    class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(class_test_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  class_test_interfaces__action__Fibonacci_Goal__fini(&msg->goal);
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Request__are_equal(const class_test_interfaces__action__Fibonacci_SendGoal_Request * lhs, const class_test_interfaces__action__Fibonacci_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!class_test_interfaces__action__Fibonacci_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Request__copy(
  const class_test_interfaces__action__Fibonacci_SendGoal_Request * input,
  class_test_interfaces__action__Fibonacci_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!class_test_interfaces__action__Fibonacci_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_SendGoal_Request *
class_test_interfaces__action__Fibonacci_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_SendGoal_Request * msg = (class_test_interfaces__action__Fibonacci_SendGoal_Request *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Request));
  bool success = class_test_interfaces__action__Fibonacci_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Request__destroy(class_test_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_SendGoal_Request * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_SendGoal_Request *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence *
class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array = (class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__destroy(class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * lhs, const class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * input,
  class_test_interfaces__action__Fibonacci_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Request);
    class_test_interfaces__action__Fibonacci_SendGoal_Request * data =
      (class_test_interfaces__action__Fibonacci_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
class_test_interfaces__action__Fibonacci_SendGoal_Response__init(class_test_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    class_test_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Response__fini(class_test_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Response__are_equal(const class_test_interfaces__action__Fibonacci_SendGoal_Response * lhs, const class_test_interfaces__action__Fibonacci_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Response__copy(
  const class_test_interfaces__action__Fibonacci_SendGoal_Response * input,
  class_test_interfaces__action__Fibonacci_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_SendGoal_Response *
class_test_interfaces__action__Fibonacci_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_SendGoal_Response * msg = (class_test_interfaces__action__Fibonacci_SendGoal_Response *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Response));
  bool success = class_test_interfaces__action__Fibonacci_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Response__destroy(class_test_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_SendGoal_Response * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_SendGoal_Response *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence *
class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array = (class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__destroy(class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * lhs, const class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * input,
  class_test_interfaces__action__Fibonacci_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_SendGoal_Response);
    class_test_interfaces__action__Fibonacci_SendGoal_Response * data =
      (class_test_interfaces__action__Fibonacci_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
class_test_interfaces__action__Fibonacci_GetResult_Request__init(class_test_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    class_test_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Request__fini(class_test_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Request__are_equal(const class_test_interfaces__action__Fibonacci_GetResult_Request * lhs, const class_test_interfaces__action__Fibonacci_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Request__copy(
  const class_test_interfaces__action__Fibonacci_GetResult_Request * input,
  class_test_interfaces__action__Fibonacci_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_GetResult_Request *
class_test_interfaces__action__Fibonacci_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_GetResult_Request * msg = (class_test_interfaces__action__Fibonacci_GetResult_Request *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_GetResult_Request));
  bool success = class_test_interfaces__action__Fibonacci_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Request__destroy(class_test_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_GetResult_Request * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_GetResult_Request *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence *
class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * array = (class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__destroy(class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * lhs, const class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * input,
  class_test_interfaces__action__Fibonacci_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_GetResult_Request);
    class_test_interfaces__action__Fibonacci_GetResult_Request * data =
      (class_test_interfaces__action__Fibonacci_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "class_test_interfaces/action/detail/fibonacci__functions.h"

bool
class_test_interfaces__action__Fibonacci_GetResult_Response__init(class_test_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!class_test_interfaces__action__Fibonacci_Result__init(&msg->result)) {
    class_test_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Response__fini(class_test_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  class_test_interfaces__action__Fibonacci_Result__fini(&msg->result);
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Response__are_equal(const class_test_interfaces__action__Fibonacci_GetResult_Response * lhs, const class_test_interfaces__action__Fibonacci_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!class_test_interfaces__action__Fibonacci_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Response__copy(
  const class_test_interfaces__action__Fibonacci_GetResult_Response * input,
  class_test_interfaces__action__Fibonacci_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!class_test_interfaces__action__Fibonacci_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_GetResult_Response *
class_test_interfaces__action__Fibonacci_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_GetResult_Response * msg = (class_test_interfaces__action__Fibonacci_GetResult_Response *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_GetResult_Response));
  bool success = class_test_interfaces__action__Fibonacci_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Response__destroy(class_test_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_GetResult_Response * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_GetResult_Response *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence *
class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * array = (class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__destroy(class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * lhs, const class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * input,
  class_test_interfaces__action__Fibonacci_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_GetResult_Response);
    class_test_interfaces__action__Fibonacci_GetResult_Response * data =
      (class_test_interfaces__action__Fibonacci_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "class_test_interfaces/action/detail/fibonacci__functions.h"

bool
class_test_interfaces__action__Fibonacci_FeedbackMessage__init(class_test_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!class_test_interfaces__action__Fibonacci_Feedback__init(&msg->feedback)) {
    class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(class_test_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  class_test_interfaces__action__Fibonacci_Feedback__fini(&msg->feedback);
}

bool
class_test_interfaces__action__Fibonacci_FeedbackMessage__are_equal(const class_test_interfaces__action__Fibonacci_FeedbackMessage * lhs, const class_test_interfaces__action__Fibonacci_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!class_test_interfaces__action__Fibonacci_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_FeedbackMessage__copy(
  const class_test_interfaces__action__Fibonacci_FeedbackMessage * input,
  class_test_interfaces__action__Fibonacci_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!class_test_interfaces__action__Fibonacci_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

class_test_interfaces__action__Fibonacci_FeedbackMessage *
class_test_interfaces__action__Fibonacci_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_FeedbackMessage * msg = (class_test_interfaces__action__Fibonacci_FeedbackMessage *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__action__Fibonacci_FeedbackMessage));
  bool success = class_test_interfaces__action__Fibonacci_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__action__Fibonacci_FeedbackMessage__destroy(class_test_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_FeedbackMessage * data = NULL;

  if (size) {
    data = (class_test_interfaces__action__Fibonacci_FeedbackMessage *)allocator.zero_allocate(size, sizeof(class_test_interfaces__action__Fibonacci_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__action__Fibonacci_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence *
class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array = (class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence *)allocator.allocate(sizeof(class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__destroy(class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__are_equal(const class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * lhs, const class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence__copy(
  const class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * input,
  class_test_interfaces__action__Fibonacci_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__action__Fibonacci_FeedbackMessage);
    class_test_interfaces__action__Fibonacci_FeedbackMessage * data =
      (class_test_interfaces__action__Fibonacci_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__action__Fibonacci_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__action__Fibonacci_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__action__Fibonacci_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
