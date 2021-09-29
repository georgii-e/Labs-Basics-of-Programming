import math
x = float (input ("x="))
y = float (input ("y="))
possitive = "point belongs to the shaded area"
negative = "point doesn't belong to the shaded area"
if math.pow(x, 2) + math.pow(y, 2) <= 1:
    if x >= 0 and y >= x :
        print (possitive)
    elif y > 0 and y < -x:
        print (possitive)
    elif x < 0 and y < x:
        print (possitive)
    elif y <= 0 and y >= -x:
        print (possitive)
    else:
       print (negative)
else:
   print (negative)
