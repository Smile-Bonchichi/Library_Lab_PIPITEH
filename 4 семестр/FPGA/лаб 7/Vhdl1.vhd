library ieee;
use ieee.std_logic_1164.all;

entity my_jk is
port (K, J: in std_logic;
Q0, Q1: out std_logic);
end my_jk;

architecture my_jk_code of my_jk is
begin
Q0 <= '1' when K = '0' and J = '1'
else '0' when K = '1' and J = '0';
Q1 <= '1' when K = '1' and J = '0'
else '0' when K = '0' and J = '1';
end my_jk_code;