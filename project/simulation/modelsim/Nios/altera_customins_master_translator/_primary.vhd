library verilog;
use verilog.vl_types.all;
entity altera_customins_master_translator is
    generic(
        SHARED_COMB_AND_MULTI: integer := 0
    );
    port(
        ci_slave_dataa  : in     vl_logic_vector(31 downto 0);
        ci_slave_datab  : in     vl_logic_vector(31 downto 0);
        ci_slave_result : out    vl_logic_vector(31 downto 0);
        ci_slave_n      : in     vl_logic_vector(7 downto 0);
        ci_slave_readra : in     vl_logic;
        ci_slave_readrb : in     vl_logic;
        ci_slave_writerc: in     vl_logic;
        ci_slave_a      : in     vl_logic_vector(4 downto 0);
        ci_slave_b      : in     vl_logic_vector(4 downto 0);
        ci_slave_c      : in     vl_logic_vector(4 downto 0);
        ci_slave_ipending: in     vl_logic_vector(31 downto 0);
        ci_slave_estatus: in     vl_logic;
        ci_slave_multi_clk: in     vl_logic;
        ci_slave_multi_reset: in     vl_logic;
        ci_slave_multi_reset_req: in     vl_logic;
        ci_slave_multi_clken: in     vl_logic;
        ci_slave_multi_start: in     vl_logic;
        ci_slave_multi_done: out    vl_logic;
        ci_slave_multi_dataa: in     vl_logic_vector(31 downto 0);
        ci_slave_multi_datab: in     vl_logic_vector(31 downto 0);
        ci_slave_multi_result: out    vl_logic_vector(31 downto 0);
        ci_slave_multi_n: in     vl_logic_vector(7 downto 0);
        ci_slave_multi_readra: in     vl_logic;
        ci_slave_multi_readrb: in     vl_logic;
        ci_slave_multi_writerc: in     vl_logic;
        ci_slave_multi_a: in     vl_logic_vector(4 downto 0);
        ci_slave_multi_b: in     vl_logic_vector(4 downto 0);
        ci_slave_multi_c: in     vl_logic_vector(4 downto 0);
        comb_ci_master_dataa: out    vl_logic_vector(31 downto 0);
        comb_ci_master_datab: out    vl_logic_vector(31 downto 0);
        comb_ci_master_result: in     vl_logic_vector(31 downto 0);
        comb_ci_master_n: out    vl_logic_vector(7 downto 0);
        comb_ci_master_readra: out    vl_logic;
        comb_ci_master_readrb: out    vl_logic;
        comb_ci_master_writerc: out    vl_logic;
        comb_ci_master_a: out    vl_logic_vector(4 downto 0);
        comb_ci_master_b: out    vl_logic_vector(4 downto 0);
        comb_ci_master_c: out    vl_logic_vector(4 downto 0);
        comb_ci_master_ipending: out    vl_logic_vector(31 downto 0);
        comb_ci_master_estatus: out    vl_logic;
        multi_ci_master_clk: out    vl_logic;
        multi_ci_master_reset: out    vl_logic;
        multi_ci_master_reset_req: out    vl_logic;
        multi_ci_master_clken: out    vl_logic;
        multi_ci_master_start: out    vl_logic;
        multi_ci_master_done: in     vl_logic;
        multi_ci_master_dataa: out    vl_logic_vector(31 downto 0);
        multi_ci_master_datab: out    vl_logic_vector(31 downto 0);
        multi_ci_master_result: in     vl_logic_vector(31 downto 0);
        multi_ci_master_n: out    vl_logic_vector(7 downto 0);
        multi_ci_master_readra: out    vl_logic;
        multi_ci_master_readrb: out    vl_logic;
        multi_ci_master_writerc: out    vl_logic;
        multi_ci_master_a: out    vl_logic_vector(4 downto 0);
        multi_ci_master_b: out    vl_logic_vector(4 downto 0);
        multi_ci_master_c: out    vl_logic_vector(4 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of SHARED_COMB_AND_MULTI : constant is 1;
end altera_customins_master_translator;
