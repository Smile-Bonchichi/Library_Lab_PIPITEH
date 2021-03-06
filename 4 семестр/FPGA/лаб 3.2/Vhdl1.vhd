library ieee;
use ieee.std_logic_1164.all;

entity busmux  is
port (BUTTON0, BUTTON1, BUTTON2: in BIT;
LEDG0, LEDG1: out BIT);
end busmux;

architecture behavior of busmux is
begin
process (BUTTON0)
begin
case BUTTON0 is
when '0' => LEDG0 <=  BUTTON1;
when '1' => LEDG0 <=  BUTTON2;
when '0' => LEDG1 <=  BUTTON1;
when '1' => LEDG1 <=  BUTTON2;
end case;
end process;
end behavior;