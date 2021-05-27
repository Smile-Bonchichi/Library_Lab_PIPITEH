library ieee;
use ieee.std_logic_1164.all;

entity decoder is
port (BUTTON0, BUTTON1, BUTTON2: in BIT;
LEDG0, LEDG1, LEDG2, LEDG3: out BIT);
end decoder;

architecture arch of decoder is
begin
LEDG0 <= BUTTON0 and (not BUTTON1) and (not BUTTON2);
LEDG1 <= BUTTON0 and (not BUTTON1) and BUTTON2;
LEDG2 <= BUTTON0 and BUTTON1 and (not BUTTON2);
LEDG3 <= BUTTON0 and BUTTON1 and BUTTON2;
end arch;