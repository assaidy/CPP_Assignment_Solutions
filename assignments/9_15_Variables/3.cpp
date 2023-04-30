/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Invalid ] => Can't start a variable name with number ?
  __name      [ Valid | Bad Practice ] => ?
  name@name   [ Invalid ] => Can't use a special character ?
  name10name  [ Valid | Bad Practice] => Reason ?
  name!name   [ Invalid ] => Can't use a special character ?
  first_NAME  [ valid | Bad Practice ] => Bad Style ?
  first_name  [ valid | Good Practice ] => Good Style "Snake Case" ?
  firstName   [ valid | Good Practice ] => Good Style "Camel Case" ?
  first name  [ Invalid ] => Can't use Spaces ?
  fn          [ Valid | Bad Practice ] => Not related name ?
  public      [ Invalid ] => Reserved Keyword ?
  Public      [ Valid | Bad Practie ] => It's better not to use it
                                        because ther is a reserved keyword like this
                                        in the lowercase "public" ?
*/