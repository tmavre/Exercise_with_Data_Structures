# Exercise with pointers and Arrays in c 
A bookstore program safe information about books with an array cat[N]. Every struct of array is type 'book' and have three attributes.

  -  Author first name
  -  Author last name
  -  Title book
  -  Special information for book that use type 'info' struct with three attributes.  
  -  Release date
  -  namber of pages
  -  price of book
  
  -  Array cat[N] must declear in main(). you must do these in this program:
  -  Give values to arrey cat[N] from keyboard. In chars arrays use string.
  -  Read a string pin[15], in this string you will give from keyboard a title of book.
     
  -  For every struct in array cat(N times)call a function search(). If title of book in struct array is equal with pin[15] then:
  -  Print the author last name, next whitespace(' ') and first letter of Author name
  -  print price of book
  -  return 1
  -  if not equal return 0
  -  For every equal title (return 1), main() will make a new string with author name,whitespace(' ') , author lastname.
  Every new string will store to a new string arrey with news[].
  -  main() call a function display().This function will print every strings that store in news[] array
  
