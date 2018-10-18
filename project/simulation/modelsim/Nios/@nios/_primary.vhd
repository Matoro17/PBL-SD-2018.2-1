library verilog;
use verilog.vl_types.all;
entity Nios is
    port(
        clk_clk         : in     vl_logic;
        lcd_0_conduit_end_rs: out    vl_logic;
        lcd_0_conduit_end_rw: out    vl_logic;
        lcd_0_conduit_end_en: out    vl_logic;
        lcd_0_conduit_end_db: out    vl_logic_vector(7 downto 0);
        pushbutton2_external_connection_export: in     vl_logic;
        led_1_external_connection_export: out    vl_logic;
        led_2_external_connection_export: out    vl_logic;
        led_3_external_connection_export: out    vl_logic;
        led_4_external_connection_export: out    vl_logic;
        led_5_external_connection_export: out    vl_logic;
        pushbutton_1_external_connection_export: in     vl_logic;
        dip_0_external_connection_export: in     vl_logic;
        dip_1_external_connection_export: in     vl_logic;
        dip_2_external_connection_export: in     vl_logic;
        dip_3_external_connection_export: in     vl_logic
    );
end Nios;
