# Serialize_Same_Number
Same_Number_With_Different_Operation

in a line of a number X with +-*/ 

u will need to add some parenthesis "()"

as of inital line "2785+2785*2785-2785/2785"

2785+(2785*2785)-(2785/2785) = 7759009

if u make each operation per line u dont need

//
acherontas@rpifive:~/GitHub_Projects/Serialize_Same_Number/seira_praxeon_arm64/bin/Debug $ ./seira_praxeon_arm64 2785 /+*-
enter number , simvolo praxis 1,2,3,4  kollimena dld *-/+ se seira pou thelete 
eg 2785 */-+ or 78895621 -*/+ 
it serialize four actions in a sequencial order without the use of parenthesis 
non viable or viable 
order makes some difference

using '/' 0 ::== 2785 / 2785 --> current rst ::== 1
using '+' 1 ::== 1 + 2785 --> current rst ::== 2786
using '*' 2786 ::== 2786 * 2785 --> current rst ::== 7759010
using '-' 7759010 ::== 7759010 - 2785 --> current rst ::== 7756225

final result set  7756225
using parenthesis 
of 1 + 7756225 - 2785 ::== 7753441
 ----> possible -1 


of 2785 + 7756225 - 1 ::== 7759009 
 ------------> similar to '/+*-' with -1 contains same values  


of 1 - 7756225 - 2785 ::== -7759009
with 2785 + 1 - 7756225 ::== -7753439 || 
7759009 - 7753439 ::== 5570 --> 5570 /  2  ::== 2785
7753441 - 7753439 ::== 2


//


for any information 
please contact me at acherontia.myosotis@gmail.com
