# Exercise with pointers and Arrays in c 
A program keep information's about prices of items for supermarket company
and use array of structs with M locations and name "items", every struct of array is type 'id'
with this attribute:

  -  name of item
  -  code of item
  -  country of origin
  -  special info for every item and use type of struct 'items' with two attributes:
  -  import costs(float)
  -  Tree prices for item from difference supermarkets
  -  Array items[] must declare in main() and give values from keyboard. 
  In chars arrays use string.
  -  Read a float 'money', and give a price item from keyboard.
  -  Call a function buy() and you must call this function **ONLY ONE TIME** in main()
  -  for every struct in array will check if Import costs of item is greater or equal 
  from 'money'
  -  if this is true , allocate memory for print the content from every struct
  -  put a pointer(dkt) to point in the begging of memory that was allocated
  (this space of memory must reallocate if exist more that one struct with this criteria)
  -  return dkt to the main(). (Maybe you will need to know how many structs pass this
   criteria, for how many memory you need for reallocation and update main()) 
  -  main() must call another function disp() to print the name and import costs for the
  items that stored in memory location that point the pointer(dkt).
