|===========================================================================================================================|
|------------------------------------------------------102-architect--------------------------------------------------------|
|------------------------------------------------ transformations-matrices--------------------------------------------------|
|===========================================================================================================================|

USAGE
  ./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...

DESCRIPTION
  x abscissa of the original point
  y ordinate of the original point
  
  transfo arg1 [arg2]
  -t i j translation along vector (i, j)
  -z m n scaling by factors m (x-axis) and n (y-axis)
  -r d rotation centered in O by a d degree angle
  -s d reflection over the ax
