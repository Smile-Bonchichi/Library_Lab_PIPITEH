library ieee; 
use ieee.std_logic_1164.all; 

entity my_ds_code is
port(D: in std_logic;
Q: out std_logic);
end my_ds_code;

architecture my_ds_code_arch of my_ds_code is
begin
Q <= D;
end my_ds_code_arch;