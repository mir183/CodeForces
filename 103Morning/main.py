def min_seconds_to_enter_pin(pin):

  Calculates the minimum number of seconds required to enter a four-digit pin code.

  Args:
    pin: A four-digit pin code, as a string.

  Returns:
    The minimum number of seconds required to enter the pin code.


  cursor = 1
  num_seconds = 0
  for digit in pin:
    if cursor != digit:
      num_seconds += 1
      cursor = digit

  num_seconds += 1  # For the final press of the cursor.

  return num_seconds
