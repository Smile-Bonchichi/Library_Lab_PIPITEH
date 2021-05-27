library ieee;
use ieee.std_logic_1164.all;
-------------------------------------------
entity combsxim is
port(BUTTON0, BUTTON1, BUTTON2: in BIT;
LEDG0, LEDG1: out BIT);
end combsxim;
---------------------------------------------
architecture functional  of combsxim is
begin 
LEDG0 <= (not BUTTON0 and BUTTON1 and BUTTON2)
		OR (BUTTON0 and not BUTTON1 and BUTTON2)
		OR (BUTTON0 and BUTTON1 and not BUTTON2)
		OR (BUTTON0 and BUTTON1 and BUTTON2);
LEDG1 <= (BUTTON1 and BUTTON2) OR
		 (BUTTON0 and BUTTON2) OR
		 (BUTTON0 and BUTTON1);
end functional;