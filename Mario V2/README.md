recreating more complex pyramids in C, using hashes (#) for bricks.
Each hash is a bit taller than it is wide, so the pyramids themselves are also be taller than they are wide.
In this program we allow the user to decide just how tall the pyramids should
be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program how will work if the user inputs 8 when prompted:

           #  #
          ##  ##
         ###  ###
        ####  ####
       #####  #####
      ######  ######
     #######  #######
    ########  ########

Here’s how the program how will work if the user inputs 4 when prompted:

          #  #
         ##  ##
        ###  ###
       ####  ####

Here’s how the program how will work if the user inputs 4 when prompted:

          #  #
         ##  ##
        ###  ###
       ####  ####

Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.

Kindly note that if the user enter a negative or out of range integer, the program should continuously asking for an integer as follow:

Height: -1

Height: 0

Height: 42

Height: 50

Height: 4

              #  #
             ##  ##
            ###  ###
           ####  ####
