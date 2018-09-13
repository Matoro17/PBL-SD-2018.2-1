// Nios.v

// Generated using ACDS version 13.1 162 at 2018.09.13.09:42:49

`timescale 1 ps / 1 ps
module Nios (
		input  wire  clk_clk,       //   clk.clk
		input  wire  reset_reset_n  // reset.reset_n
	);

	wire         mm_interconnect_0_jtag_avalon_jtag_slave_waitrequest; // Jtag:av_waitrequest -> mm_interconnect_0:Jtag_avalon_jtag_slave_waitrequest
	wire  [31:0] mm_interconnect_0_jtag_avalon_jtag_slave_writedata;   // mm_interconnect_0:Jtag_avalon_jtag_slave_writedata -> Jtag:av_writedata
	wire   [0:0] mm_interconnect_0_jtag_avalon_jtag_slave_address;     // mm_interconnect_0:Jtag_avalon_jtag_slave_address -> Jtag:av_address
	wire         mm_interconnect_0_jtag_avalon_jtag_slave_chipselect;  // mm_interconnect_0:Jtag_avalon_jtag_slave_chipselect -> Jtag:av_chipselect
	wire         mm_interconnect_0_jtag_avalon_jtag_slave_write;       // mm_interconnect_0:Jtag_avalon_jtag_slave_write -> Jtag:av_write_n
	wire         mm_interconnect_0_jtag_avalon_jtag_slave_read;        // mm_interconnect_0:Jtag_avalon_jtag_slave_read -> Jtag:av_read_n
	wire  [31:0] mm_interconnect_0_jtag_avalon_jtag_slave_readdata;    // Jtag:av_readdata -> mm_interconnect_0:Jtag_avalon_jtag_slave_readdata
	wire         nios_data_master_waitrequest;                         // mm_interconnect_0:Nios_data_master_waitrequest -> Nios:d_waitrequest
	wire  [31:0] nios_data_master_writedata;                           // Nios:d_writedata -> mm_interconnect_0:Nios_data_master_writedata
	wire  [17:0] nios_data_master_address;                             // Nios:d_address -> mm_interconnect_0:Nios_data_master_address
	wire         nios_data_master_write;                               // Nios:d_write -> mm_interconnect_0:Nios_data_master_write
	wire         nios_data_master_read;                                // Nios:d_read -> mm_interconnect_0:Nios_data_master_read
	wire  [31:0] nios_data_master_readdata;                            // mm_interconnect_0:Nios_data_master_readdata -> Nios:d_readdata
	wire         nios_data_master_debugaccess;                         // Nios:jtag_debug_module_debugaccess_to_roms -> mm_interconnect_0:Nios_data_master_debugaccess
	wire         nios_data_master_readdatavalid;                       // mm_interconnect_0:Nios_data_master_readdatavalid -> Nios:d_readdatavalid
	wire   [3:0] nios_data_master_byteenable;                          // Nios:d_byteenable -> mm_interconnect_0:Nios_data_master_byteenable
	wire         mm_interconnect_0_nios_jtag_debug_module_waitrequest; // Nios:jtag_debug_module_waitrequest -> mm_interconnect_0:Nios_jtag_debug_module_waitrequest
	wire  [31:0] mm_interconnect_0_nios_jtag_debug_module_writedata;   // mm_interconnect_0:Nios_jtag_debug_module_writedata -> Nios:jtag_debug_module_writedata
	wire   [8:0] mm_interconnect_0_nios_jtag_debug_module_address;     // mm_interconnect_0:Nios_jtag_debug_module_address -> Nios:jtag_debug_module_address
	wire         mm_interconnect_0_nios_jtag_debug_module_write;       // mm_interconnect_0:Nios_jtag_debug_module_write -> Nios:jtag_debug_module_write
	wire         mm_interconnect_0_nios_jtag_debug_module_read;        // mm_interconnect_0:Nios_jtag_debug_module_read -> Nios:jtag_debug_module_read
	wire  [31:0] mm_interconnect_0_nios_jtag_debug_module_readdata;    // Nios:jtag_debug_module_readdata -> mm_interconnect_0:Nios_jtag_debug_module_readdata
	wire         mm_interconnect_0_nios_jtag_debug_module_debugaccess; // mm_interconnect_0:Nios_jtag_debug_module_debugaccess -> Nios:jtag_debug_module_debugaccess
	wire   [3:0] mm_interconnect_0_nios_jtag_debug_module_byteenable;  // mm_interconnect_0:Nios_jtag_debug_module_byteenable -> Nios:jtag_debug_module_byteenable
	wire  [31:0] mm_interconnect_0_memory_s1_writedata;                // mm_interconnect_0:memory_s1_writedata -> memory:writedata
	wire  [13:0] mm_interconnect_0_memory_s1_address;                  // mm_interconnect_0:memory_s1_address -> memory:address
	wire         mm_interconnect_0_memory_s1_chipselect;               // mm_interconnect_0:memory_s1_chipselect -> memory:chipselect
	wire         mm_interconnect_0_memory_s1_clken;                    // mm_interconnect_0:memory_s1_clken -> memory:clken
	wire         mm_interconnect_0_memory_s1_write;                    // mm_interconnect_0:memory_s1_write -> memory:write
	wire  [31:0] mm_interconnect_0_memory_s1_readdata;                 // memory:readdata -> mm_interconnect_0:memory_s1_readdata
	wire   [3:0] mm_interconnect_0_memory_s1_byteenable;               // mm_interconnect_0:memory_s1_byteenable -> memory:byteenable
	wire         nios_instruction_master_waitrequest;                  // mm_interconnect_0:Nios_instruction_master_waitrequest -> Nios:i_waitrequest
	wire  [17:0] nios_instruction_master_address;                      // Nios:i_address -> mm_interconnect_0:Nios_instruction_master_address
	wire         nios_instruction_master_read;                         // Nios:i_read -> mm_interconnect_0:Nios_instruction_master_read
	wire  [31:0] nios_instruction_master_readdata;                     // mm_interconnect_0:Nios_instruction_master_readdata -> Nios:i_readdata
	wire         nios_instruction_master_readdatavalid;                // mm_interconnect_0:Nios_instruction_master_readdatavalid -> Nios:i_readdatavalid
	wire         irq_mapper_receiver0_irq;                             // Jtag:av_irq -> irq_mapper:receiver0_irq
	wire  [31:0] nios_d_irq_irq;                                       // irq_mapper:sender_irq -> Nios:d_irq
	wire         rst_controller_reset_out_reset;                       // rst_controller:reset_out -> [Jtag:rst_n, Nios:reset_n, irq_mapper:reset, memory:reset, mm_interconnect_0:Nios_reset_n_reset_bridge_in_reset_reset, rst_translator:in_reset]
	wire         rst_controller_reset_out_reset_req;                   // rst_controller:reset_req -> [Nios:reset_req, memory:reset_req, rst_translator:reset_req_in]
	wire         nios_jtag_debug_module_reset_reset;                   // Nios:jtag_debug_module_resetrequest -> rst_controller:reset_in1

	Nios_memory memory (
		.clk        (clk_clk),                                //   clk1.clk
		.address    (mm_interconnect_0_memory_s1_address),    //     s1.address
		.clken      (mm_interconnect_0_memory_s1_clken),      //       .clken
		.chipselect (mm_interconnect_0_memory_s1_chipselect), //       .chipselect
		.write      (mm_interconnect_0_memory_s1_write),      //       .write
		.readdata   (mm_interconnect_0_memory_s1_readdata),   //       .readdata
		.writedata  (mm_interconnect_0_memory_s1_writedata),  //       .writedata
		.byteenable (mm_interconnect_0_memory_s1_byteenable), //       .byteenable
		.reset      (rst_controller_reset_out_reset),         // reset1.reset
		.reset_req  (rst_controller_reset_out_reset_req)      //       .reset_req
	);

	Nios_Nios nios (
		.clk                                   (clk_clk),                                              //                       clk.clk
		.reset_n                               (~rst_controller_reset_out_reset),                      //                   reset_n.reset_n
		.reset_req                             (rst_controller_reset_out_reset_req),                   //                          .reset_req
		.d_address                             (nios_data_master_address),                             //               data_master.address
		.d_byteenable                          (nios_data_master_byteenable),                          //                          .byteenable
		.d_read                                (nios_data_master_read),                                //                          .read
		.d_readdata                            (nios_data_master_readdata),                            //                          .readdata
		.d_waitrequest                         (nios_data_master_waitrequest),                         //                          .waitrequest
		.d_write                               (nios_data_master_write),                               //                          .write
		.d_writedata                           (nios_data_master_writedata),                           //                          .writedata
		.d_readdatavalid                       (nios_data_master_readdatavalid),                       //                          .readdatavalid
		.jtag_debug_module_debugaccess_to_roms (nios_data_master_debugaccess),                         //                          .debugaccess
		.i_address                             (nios_instruction_master_address),                      //        instruction_master.address
		.i_read                                (nios_instruction_master_read),                         //                          .read
		.i_readdata                            (nios_instruction_master_readdata),                     //                          .readdata
		.i_waitrequest                         (nios_instruction_master_waitrequest),                  //                          .waitrequest
		.i_readdatavalid                       (nios_instruction_master_readdatavalid),                //                          .readdatavalid
		.d_irq                                 (nios_d_irq_irq),                                       //                     d_irq.irq
		.jtag_debug_module_resetrequest        (nios_jtag_debug_module_reset_reset),                   //   jtag_debug_module_reset.reset
		.jtag_debug_module_address             (mm_interconnect_0_nios_jtag_debug_module_address),     //         jtag_debug_module.address
		.jtag_debug_module_byteenable          (mm_interconnect_0_nios_jtag_debug_module_byteenable),  //                          .byteenable
		.jtag_debug_module_debugaccess         (mm_interconnect_0_nios_jtag_debug_module_debugaccess), //                          .debugaccess
		.jtag_debug_module_read                (mm_interconnect_0_nios_jtag_debug_module_read),        //                          .read
		.jtag_debug_module_readdata            (mm_interconnect_0_nios_jtag_debug_module_readdata),    //                          .readdata
		.jtag_debug_module_waitrequest         (mm_interconnect_0_nios_jtag_debug_module_waitrequest), //                          .waitrequest
		.jtag_debug_module_write               (mm_interconnect_0_nios_jtag_debug_module_write),       //                          .write
		.jtag_debug_module_writedata           (mm_interconnect_0_nios_jtag_debug_module_writedata),   //                          .writedata
		.no_ci_readra                          ()                                                      // custom_instruction_master.readra
	);

	Nios_Jtag jtag (
		.clk            (clk_clk),                                              //               clk.clk
		.rst_n          (~rst_controller_reset_out_reset),                      //             reset.reset_n
		.av_chipselect  (mm_interconnect_0_jtag_avalon_jtag_slave_chipselect),  // avalon_jtag_slave.chipselect
		.av_address     (mm_interconnect_0_jtag_avalon_jtag_slave_address),     //                  .address
		.av_read_n      (~mm_interconnect_0_jtag_avalon_jtag_slave_read),       //                  .read_n
		.av_readdata    (mm_interconnect_0_jtag_avalon_jtag_slave_readdata),    //                  .readdata
		.av_write_n     (~mm_interconnect_0_jtag_avalon_jtag_slave_write),      //                  .write_n
		.av_writedata   (mm_interconnect_0_jtag_avalon_jtag_slave_writedata),   //                  .writedata
		.av_waitrequest (mm_interconnect_0_jtag_avalon_jtag_slave_waitrequest), //                  .waitrequest
		.av_irq         (irq_mapper_receiver0_irq)                              //               irq.irq
	);

	Nios_mm_interconnect_0 mm_interconnect_0 (
		.Clk_clk_clk                              (clk_clk),                                              //                            Clk_clk.clk
		.Nios_reset_n_reset_bridge_in_reset_reset (rst_controller_reset_out_reset),                       // Nios_reset_n_reset_bridge_in_reset.reset
		.Nios_data_master_address                 (nios_data_master_address),                             //                   Nios_data_master.address
		.Nios_data_master_waitrequest             (nios_data_master_waitrequest),                         //                                   .waitrequest
		.Nios_data_master_byteenable              (nios_data_master_byteenable),                          //                                   .byteenable
		.Nios_data_master_read                    (nios_data_master_read),                                //                                   .read
		.Nios_data_master_readdata                (nios_data_master_readdata),                            //                                   .readdata
		.Nios_data_master_readdatavalid           (nios_data_master_readdatavalid),                       //                                   .readdatavalid
		.Nios_data_master_write                   (nios_data_master_write),                               //                                   .write
		.Nios_data_master_writedata               (nios_data_master_writedata),                           //                                   .writedata
		.Nios_data_master_debugaccess             (nios_data_master_debugaccess),                         //                                   .debugaccess
		.Nios_instruction_master_address          (nios_instruction_master_address),                      //            Nios_instruction_master.address
		.Nios_instruction_master_waitrequest      (nios_instruction_master_waitrequest),                  //                                   .waitrequest
		.Nios_instruction_master_read             (nios_instruction_master_read),                         //                                   .read
		.Nios_instruction_master_readdata         (nios_instruction_master_readdata),                     //                                   .readdata
		.Nios_instruction_master_readdatavalid    (nios_instruction_master_readdatavalid),                //                                   .readdatavalid
		.Jtag_avalon_jtag_slave_address           (mm_interconnect_0_jtag_avalon_jtag_slave_address),     //             Jtag_avalon_jtag_slave.address
		.Jtag_avalon_jtag_slave_write             (mm_interconnect_0_jtag_avalon_jtag_slave_write),       //                                   .write
		.Jtag_avalon_jtag_slave_read              (mm_interconnect_0_jtag_avalon_jtag_slave_read),        //                                   .read
		.Jtag_avalon_jtag_slave_readdata          (mm_interconnect_0_jtag_avalon_jtag_slave_readdata),    //                                   .readdata
		.Jtag_avalon_jtag_slave_writedata         (mm_interconnect_0_jtag_avalon_jtag_slave_writedata),   //                                   .writedata
		.Jtag_avalon_jtag_slave_waitrequest       (mm_interconnect_0_jtag_avalon_jtag_slave_waitrequest), //                                   .waitrequest
		.Jtag_avalon_jtag_slave_chipselect        (mm_interconnect_0_jtag_avalon_jtag_slave_chipselect),  //                                   .chipselect
		.memory_s1_address                        (mm_interconnect_0_memory_s1_address),                  //                          memory_s1.address
		.memory_s1_write                          (mm_interconnect_0_memory_s1_write),                    //                                   .write
		.memory_s1_readdata                       (mm_interconnect_0_memory_s1_readdata),                 //                                   .readdata
		.memory_s1_writedata                      (mm_interconnect_0_memory_s1_writedata),                //                                   .writedata
		.memory_s1_byteenable                     (mm_interconnect_0_memory_s1_byteenable),               //                                   .byteenable
		.memory_s1_chipselect                     (mm_interconnect_0_memory_s1_chipselect),               //                                   .chipselect
		.memory_s1_clken                          (mm_interconnect_0_memory_s1_clken),                    //                                   .clken
		.Nios_jtag_debug_module_address           (mm_interconnect_0_nios_jtag_debug_module_address),     //             Nios_jtag_debug_module.address
		.Nios_jtag_debug_module_write             (mm_interconnect_0_nios_jtag_debug_module_write),       //                                   .write
		.Nios_jtag_debug_module_read              (mm_interconnect_0_nios_jtag_debug_module_read),        //                                   .read
		.Nios_jtag_debug_module_readdata          (mm_interconnect_0_nios_jtag_debug_module_readdata),    //                                   .readdata
		.Nios_jtag_debug_module_writedata         (mm_interconnect_0_nios_jtag_debug_module_writedata),   //                                   .writedata
		.Nios_jtag_debug_module_byteenable        (mm_interconnect_0_nios_jtag_debug_module_byteenable),  //                                   .byteenable
		.Nios_jtag_debug_module_waitrequest       (mm_interconnect_0_nios_jtag_debug_module_waitrequest), //                                   .waitrequest
		.Nios_jtag_debug_module_debugaccess       (mm_interconnect_0_nios_jtag_debug_module_debugaccess)  //                                   .debugaccess
	);

	Nios_irq_mapper irq_mapper (
		.clk           (clk_clk),                        //       clk.clk
		.reset         (rst_controller_reset_out_reset), // clk_reset.reset
		.receiver0_irq (irq_mapper_receiver0_irq),       // receiver0.irq
		.sender_irq    (nios_d_irq_irq)                  //    sender.irq
	);

	altera_reset_controller #(
		.NUM_RESET_INPUTS          (2),
		.OUTPUT_RESET_SYNC_EDGES   ("deassert"),
		.SYNC_DEPTH                (2),
		.RESET_REQUEST_PRESENT     (1),
		.RESET_REQ_WAIT_TIME       (1),
		.MIN_RST_ASSERTION_TIME    (3),
		.RESET_REQ_EARLY_DSRT_TIME (1),
		.USE_RESET_REQUEST_IN0     (0),
		.USE_RESET_REQUEST_IN1     (0),
		.USE_RESET_REQUEST_IN2     (0),
		.USE_RESET_REQUEST_IN3     (0),
		.USE_RESET_REQUEST_IN4     (0),
		.USE_RESET_REQUEST_IN5     (0),
		.USE_RESET_REQUEST_IN6     (0),
		.USE_RESET_REQUEST_IN7     (0),
		.USE_RESET_REQUEST_IN8     (0),
		.USE_RESET_REQUEST_IN9     (0),
		.USE_RESET_REQUEST_IN10    (0),
		.USE_RESET_REQUEST_IN11    (0),
		.USE_RESET_REQUEST_IN12    (0),
		.USE_RESET_REQUEST_IN13    (0),
		.USE_RESET_REQUEST_IN14    (0),
		.USE_RESET_REQUEST_IN15    (0),
		.ADAPT_RESET_REQUEST       (0)
	) rst_controller (
		.reset_in0      (~reset_reset_n),                     // reset_in0.reset
		.reset_in1      (nios_jtag_debug_module_reset_reset), // reset_in1.reset
		.clk            (clk_clk),                            //       clk.clk
		.reset_out      (rst_controller_reset_out_reset),     // reset_out.reset
		.reset_req      (rst_controller_reset_out_reset_req), //          .reset_req
		.reset_req_in0  (1'b0),                               // (terminated)
		.reset_req_in1  (1'b0),                               // (terminated)
		.reset_in2      (1'b0),                               // (terminated)
		.reset_req_in2  (1'b0),                               // (terminated)
		.reset_in3      (1'b0),                               // (terminated)
		.reset_req_in3  (1'b0),                               // (terminated)
		.reset_in4      (1'b0),                               // (terminated)
		.reset_req_in4  (1'b0),                               // (terminated)
		.reset_in5      (1'b0),                               // (terminated)
		.reset_req_in5  (1'b0),                               // (terminated)
		.reset_in6      (1'b0),                               // (terminated)
		.reset_req_in6  (1'b0),                               // (terminated)
		.reset_in7      (1'b0),                               // (terminated)
		.reset_req_in7  (1'b0),                               // (terminated)
		.reset_in8      (1'b0),                               // (terminated)
		.reset_req_in8  (1'b0),                               // (terminated)
		.reset_in9      (1'b0),                               // (terminated)
		.reset_req_in9  (1'b0),                               // (terminated)
		.reset_in10     (1'b0),                               // (terminated)
		.reset_req_in10 (1'b0),                               // (terminated)
		.reset_in11     (1'b0),                               // (terminated)
		.reset_req_in11 (1'b0),                               // (terminated)
		.reset_in12     (1'b0),                               // (terminated)
		.reset_req_in12 (1'b0),                               // (terminated)
		.reset_in13     (1'b0),                               // (terminated)
		.reset_req_in13 (1'b0),                               // (terminated)
		.reset_in14     (1'b0),                               // (terminated)
		.reset_req_in14 (1'b0),                               // (terminated)
		.reset_in15     (1'b0),                               // (terminated)
		.reset_req_in15 (1'b0)                                // (terminated)
	);

endmodule
