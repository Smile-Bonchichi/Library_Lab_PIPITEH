library ieee;
use ieee.std_logic_1164.all;

entity decoder is
port (BUTTON0, BUTTON1: in bit;
LEDG0, LEDG1, LEDG2, LEDG3: out bit);
end decoder;

architecture arch of decoder is
begin
LEDG0 <= (not BUTTON0) and (not BUTTON1);
LEDG1 <= BUTTON0 and (not BUTTON1);
LEDG2 <= (not BUTTON0) and BUTTON1;
LEDG3 <= BUTTON0 and BUTTON1;
end arch;