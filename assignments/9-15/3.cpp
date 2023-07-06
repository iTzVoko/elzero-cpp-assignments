/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
/*
  name        [ Valid	| Good Practice	]
  NAME        [ Valid	| Bad Practice	]
  1name       [ Invalid	] 					=> Reason ? It starts with a number
  __name      [ Valid	| Good Practice	]	=> Reason ? Underscores are allowed
  name@name   [ Invalid ] 					=> Reason ? It contains a special character (@)
  name10name  [ Valid 	| Good Practice	]	=> Reason ? Using numbers in the middle is allowed
  name!name   [ Invalid ]					=> Reason ? It contains a special character (!)
  first_NAME  [ Valid 	| Bad Practice 	]	=> Reason ? It mixes small-case with capital-case words
  first_name  [ Valid 	| Best Practice	]	=> Reason ? It follows snake case
  firstName   [ Valid 	| Best Practice	]	=> Reason ? It follows camel case
  first name  [ Invalid					] 	=> Reason ? It contains a space
  fn          [ Valid 	| Bad Practice 	]	=> Reason ? It's unclear
  public      [ Invalid ] 					=> Reason ? It's a reserved keyword
  Public      [ Valid 	| Bad Practice 	] 	=> Reason ? It's valid, but variable names should start with
														lower-case letter
*/
