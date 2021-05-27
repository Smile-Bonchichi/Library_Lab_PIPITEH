library ieee;
use ieee.std_logic_1164.all;

entity rand2 is
port ( BUTTON0, BUTTON1: in BIT;
LEDG0, LEDG1, LEDG2, LEDG3, LEDG4 : out BIT);
end rand2;

architecture functional of rand2 is 
begin
LEDG0<= BUTTON0 and BUTTON1;
LEDG1<= BUTTON0 or BUTTON1;
LEDG2<= not BUTTON0;
LEDG3<= BUTTON0 nand BUTTON1;
LEDG4<= BUTTON0 nor BUTTON1;
end functional;