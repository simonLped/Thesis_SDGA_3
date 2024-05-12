// (c) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// (c) Copyright 2022-2024 Advanced Micro Devices, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of AMD and is protected under U.S. and international copyright
// and other intellectual property laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// AMD, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) AMD shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or AMD had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// AMD products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of AMD products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#include "zynq_example_xbar_0_sc.h"

#include "zynq_example_xbar_0.h"

#include "axi_crossbar.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
zynq_example_xbar_0::zynq_example_xbar_0(const sc_core::sc_module_name& nm) : zynq_example_xbar_0_sc(nm), aclk("aclk"), aresetn("aresetn"), s_axi_awid("s_axi_awid"), s_axi_awaddr("s_axi_awaddr"), s_axi_awlen("s_axi_awlen"), s_axi_awsize("s_axi_awsize"), s_axi_awburst("s_axi_awburst"), s_axi_awlock("s_axi_awlock"), s_axi_awcache("s_axi_awcache"), s_axi_awprot("s_axi_awprot"), s_axi_awqos("s_axi_awqos"), s_axi_awvalid("s_axi_awvalid"), s_axi_awready("s_axi_awready"), s_axi_wdata("s_axi_wdata"), s_axi_wstrb("s_axi_wstrb"), s_axi_wlast("s_axi_wlast"), s_axi_wvalid("s_axi_wvalid"), s_axi_wready("s_axi_wready"), s_axi_bid("s_axi_bid"), s_axi_bresp("s_axi_bresp"), s_axi_bvalid("s_axi_bvalid"), s_axi_bready("s_axi_bready"), s_axi_arid("s_axi_arid"), s_axi_araddr("s_axi_araddr"), s_axi_arlen("s_axi_arlen"), s_axi_arsize("s_axi_arsize"), s_axi_arburst("s_axi_arburst"), s_axi_arlock("s_axi_arlock"), s_axi_arcache("s_axi_arcache"), s_axi_arprot("s_axi_arprot"), s_axi_arqos("s_axi_arqos"), s_axi_arvalid("s_axi_arvalid"), s_axi_arready("s_axi_arready"), s_axi_rid("s_axi_rid"), s_axi_rdata("s_axi_rdata"), s_axi_rresp("s_axi_rresp"), s_axi_rlast("s_axi_rlast"), s_axi_rvalid("s_axi_rvalid"), s_axi_rready("s_axi_rready"), m_axi_awaddr("m_axi_awaddr"), m_axi_awlen("m_axi_awlen"), m_axi_awsize("m_axi_awsize"), m_axi_awburst("m_axi_awburst"), m_axi_awlock("m_axi_awlock"), m_axi_awcache("m_axi_awcache"), m_axi_awprot("m_axi_awprot"), m_axi_awregion("m_axi_awregion"), m_axi_awqos("m_axi_awqos"), m_axi_awvalid("m_axi_awvalid"), m_axi_awready("m_axi_awready"), m_axi_wdata("m_axi_wdata"), m_axi_wstrb("m_axi_wstrb"), m_axi_wlast("m_axi_wlast"), m_axi_wvalid("m_axi_wvalid"), m_axi_wready("m_axi_wready"), m_axi_bresp("m_axi_bresp"), m_axi_bvalid("m_axi_bvalid"), m_axi_bready("m_axi_bready"), m_axi_araddr("m_axi_araddr"), m_axi_arlen("m_axi_arlen"), m_axi_arsize("m_axi_arsize"), m_axi_arburst("m_axi_arburst"), m_axi_arlock("m_axi_arlock"), m_axi_arcache("m_axi_arcache"), m_axi_arprot("m_axi_arprot"), m_axi_arregion("m_axi_arregion"), m_axi_arqos("m_axi_arqos"), m_axi_arvalid("m_axi_arvalid"), m_axi_arready("m_axi_arready"), m_axi_rdata("m_axi_rdata"), m_axi_rresp("m_axi_rresp"), m_axi_rlast("m_axi_rlast"), m_axi_rvalid("m_axi_rvalid"), m_axi_rready("m_axi_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_s_axi_awlock_converter = NULL;
  mp_s_axi_awvalid_converter = NULL;
  mp_s_axi_awready_converter = NULL;
  mp_s_axi_wlast_converter = NULL;
  mp_s_axi_wvalid_converter = NULL;
  mp_s_axi_wready_converter = NULL;
  mp_s_axi_bvalid_converter = NULL;
  mp_s_axi_bready_converter = NULL;
  mp_s_axi_arlock_converter = NULL;
  mp_s_axi_arvalid_converter = NULL;
  mp_s_axi_arready_converter = NULL;
  mp_s_axi_rlast_converter = NULL;
  mp_s_axi_rvalid_converter = NULL;
  mp_s_axi_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_0 = NULL;
  mp_m_axi_awlen_converter_0 = NULL;
  mp_m_axi_awsize_converter_0 = NULL;
  mp_m_axi_awburst_converter_0 = NULL;
  mp_m_axi_awlock_converter_0 = NULL;
  mp_m_axi_awcache_converter_0 = NULL;
  mp_m_axi_awprot_converter_0 = NULL;
  mp_m_axi_awregion_converter_0 = NULL;
  mp_m_axi_awqos_converter_0 = NULL;
  mp_m_axi_awvalid_converter_0 = NULL;
  mp_m_axi_awready_converter_0 = NULL;
  mp_m_axi_wdata_converter_0 = NULL;
  mp_m_axi_wstrb_converter_0 = NULL;
  mp_m_axi_wlast_converter_0 = NULL;
  mp_m_axi_wvalid_converter_0 = NULL;
  mp_m_axi_wready_converter_0 = NULL;
  mp_m_axi_bresp_converter_0 = NULL;
  mp_m_axi_bvalid_converter_0 = NULL;
  mp_m_axi_bready_converter_0 = NULL;
  mp_m_axi_araddr_converter_0 = NULL;
  mp_m_axi_arlen_converter_0 = NULL;
  mp_m_axi_arsize_converter_0 = NULL;
  mp_m_axi_arburst_converter_0 = NULL;
  mp_m_axi_arlock_converter_0 = NULL;
  mp_m_axi_arcache_converter_0 = NULL;
  mp_m_axi_arprot_converter_0 = NULL;
  mp_m_axi_arregion_converter_0 = NULL;
  mp_m_axi_arqos_converter_0 = NULL;
  mp_m_axi_arvalid_converter_0 = NULL;
  mp_m_axi_arready_converter_0 = NULL;
  mp_m_axi_rdata_converter_0 = NULL;
  mp_m_axi_rresp_converter_0 = NULL;
  mp_m_axi_rlast_converter_0 = NULL;
  mp_m_axi_rvalid_converter_0 = NULL;
  mp_m_axi_rready_converter_0 = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_1 = NULL;
  mp_m_axi_awlen_converter_1 = NULL;
  mp_m_axi_awsize_converter_1 = NULL;
  mp_m_axi_awburst_converter_1 = NULL;
  mp_m_axi_awlock_converter_1 = NULL;
  mp_m_axi_awcache_converter_1 = NULL;
  mp_m_axi_awprot_converter_1 = NULL;
  mp_m_axi_awregion_converter_1 = NULL;
  mp_m_axi_awqos_converter_1 = NULL;
  mp_m_axi_awvalid_converter_1 = NULL;
  mp_m_axi_awready_converter_1 = NULL;
  mp_m_axi_wdata_converter_1 = NULL;
  mp_m_axi_wstrb_converter_1 = NULL;
  mp_m_axi_wlast_converter_1 = NULL;
  mp_m_axi_wvalid_converter_1 = NULL;
  mp_m_axi_wready_converter_1 = NULL;
  mp_m_axi_bresp_converter_1 = NULL;
  mp_m_axi_bvalid_converter_1 = NULL;
  mp_m_axi_bready_converter_1 = NULL;
  mp_m_axi_araddr_converter_1 = NULL;
  mp_m_axi_arlen_converter_1 = NULL;
  mp_m_axi_arsize_converter_1 = NULL;
  mp_m_axi_arburst_converter_1 = NULL;
  mp_m_axi_arlock_converter_1 = NULL;
  mp_m_axi_arcache_converter_1 = NULL;
  mp_m_axi_arprot_converter_1 = NULL;
  mp_m_axi_arregion_converter_1 = NULL;
  mp_m_axi_arqos_converter_1 = NULL;
  mp_m_axi_arvalid_converter_1 = NULL;
  mp_m_axi_arready_converter_1 = NULL;
  mp_m_axi_rdata_converter_1 = NULL;
  mp_m_axi_rresp_converter_1 = NULL;
  mp_m_axi_rlast_converter_1 = NULL;
  mp_m_axi_rvalid_converter_1 = NULL;
  mp_m_axi_rready_converter_1 = NULL;

  // initialize junctures
  mp_m_axi_concat_araddr = NULL;
  mp_m_axi_concat_arburst = NULL;
  mp_m_axi_concat_arcache = NULL;
  mp_m_axi_concat_arlen = NULL;
  mp_m_axi_concat_arlock = NULL;
  mp_m_axi_concat_arprot = NULL;
  mp_m_axi_concat_arqos = NULL;
  mp_m_axi_concat_arregion = NULL;
  mp_m_axi_concat_arsize = NULL;
  mp_m_axi_concat_arvalid = NULL;
  mp_m_axi_concat_awaddr = NULL;
  mp_m_axi_concat_awburst = NULL;
  mp_m_axi_concat_awcache = NULL;
  mp_m_axi_concat_awlen = NULL;
  mp_m_axi_concat_awlock = NULL;
  mp_m_axi_concat_awprot = NULL;
  mp_m_axi_concat_awqos = NULL;
  mp_m_axi_concat_awregion = NULL;
  mp_m_axi_concat_awsize = NULL;
  mp_m_axi_concat_awvalid = NULL;
  mp_m_axi_concat_bready = NULL;
  mp_m_axi_concat_rready = NULL;
  mp_m_axi_concat_wdata = NULL;
  mp_m_axi_concat_wlast = NULL;
  mp_m_axi_concat_wstrb = NULL;
  mp_m_axi_concat_wvalid = NULL;
  mp_m_axi_split_arready = NULL;
  mp_m_axi_split_awready = NULL;
  mp_m_axi_split_bresp = NULL;
  mp_m_axi_split_bvalid = NULL;
  mp_m_axi_split_rdata = NULL;
  mp_m_axi_split_rlast = NULL;
  mp_m_axi_split_rresp = NULL;
  mp_m_axi_split_rvalid = NULL;
  mp_m_axi_split_wready = NULL;
  mp_m_axi_concat_awaddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_awaddr");
  mp_m_axi_concat_awaddr->in_port[0](m_axi_concat_awaddr_out_0);
  mp_m_axi_concat_awaddr->out_port(m_axi_awaddr);
    mp_m_axi_concat_awaddr->offset_port(0, 0);
  mp_m_axi_concat_awlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_awlen");
  mp_m_axi_concat_awlen->in_port[0](m_axi_concat_awlen_out_0);
  mp_m_axi_concat_awlen->out_port(m_axi_awlen);
    mp_m_axi_concat_awlen->offset_port(0, 0);
  mp_m_axi_concat_awsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awsize");
  mp_m_axi_concat_awsize->in_port[0](m_axi_concat_awsize_out_0);
  mp_m_axi_concat_awsize->out_port(m_axi_awsize);
    mp_m_axi_concat_awsize->offset_port(0, 0);
  mp_m_axi_concat_awburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_awburst");
  mp_m_axi_concat_awburst->in_port[0](m_axi_concat_awburst_out_0);
  mp_m_axi_concat_awburst->out_port(m_axi_awburst);
    mp_m_axi_concat_awburst->offset_port(0, 0);
  mp_m_axi_concat_awlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awlock");
  mp_m_axi_concat_awlock->in_port[0](m_axi_concat_awlock_out_0);
  mp_m_axi_concat_awlock->out_port(m_axi_awlock);
    mp_m_axi_concat_awlock->offset_port(0, 0);
  mp_m_axi_concat_awcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awcache");
  mp_m_axi_concat_awcache->in_port[0](m_axi_concat_awcache_out_0);
  mp_m_axi_concat_awcache->out_port(m_axi_awcache);
    mp_m_axi_concat_awcache->offset_port(0, 0);
  mp_m_axi_concat_awprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awprot");
  mp_m_axi_concat_awprot->in_port[0](m_axi_concat_awprot_out_0);
  mp_m_axi_concat_awprot->out_port(m_axi_awprot);
    mp_m_axi_concat_awprot->offset_port(0, 0);
  mp_m_axi_concat_awregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awregion");
  mp_m_axi_concat_awregion->in_port[0](m_axi_concat_awregion_out_0);
  mp_m_axi_concat_awregion->out_port(m_axi_awregion);
    mp_m_axi_concat_awregion->offset_port(0, 0);
  mp_m_axi_concat_awqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awqos");
  mp_m_axi_concat_awqos->in_port[0](m_axi_concat_awqos_out_0);
  mp_m_axi_concat_awqos->out_port(m_axi_awqos);
    mp_m_axi_concat_awqos->offset_port(0, 0);
  mp_m_axi_concat_awvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awvalid");
  mp_m_axi_concat_awvalid->in_port[0](m_axi_concat_awvalid_out_0);
  mp_m_axi_concat_awvalid->out_port(m_axi_awvalid);
    mp_m_axi_concat_awvalid->offset_port(0, 0);
  mp_m_axi_split_awready = new xsc::xsc_split<2, 2>("m_axi_split_awready");
  mp_m_axi_split_awready->in_port(m_axi_awready);
  mp_m_axi_split_awready->out_port[0](m_axi_split_awready_out_0);
    mp_m_axi_split_awready->add_mask(0,1,0);
  mp_m_axi_concat_wdata = new xsc::xsc_concatenator<64, 2>("m_axi_concat_wdata");
  mp_m_axi_concat_wdata->in_port[0](m_axi_concat_wdata_out_0);
  mp_m_axi_concat_wdata->out_port(m_axi_wdata);
    mp_m_axi_concat_wdata->offset_port(0, 0);
  mp_m_axi_concat_wstrb = new xsc::xsc_concatenator<8, 2>("m_axi_concat_wstrb");
  mp_m_axi_concat_wstrb->in_port[0](m_axi_concat_wstrb_out_0);
  mp_m_axi_concat_wstrb->out_port(m_axi_wstrb);
    mp_m_axi_concat_wstrb->offset_port(0, 0);
  mp_m_axi_concat_wlast = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wlast");
  mp_m_axi_concat_wlast->in_port[0](m_axi_concat_wlast_out_0);
  mp_m_axi_concat_wlast->out_port(m_axi_wlast);
    mp_m_axi_concat_wlast->offset_port(0, 0);
  mp_m_axi_concat_wvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wvalid");
  mp_m_axi_concat_wvalid->in_port[0](m_axi_concat_wvalid_out_0);
  mp_m_axi_concat_wvalid->out_port(m_axi_wvalid);
    mp_m_axi_concat_wvalid->offset_port(0, 0);
  mp_m_axi_split_wready = new xsc::xsc_split<2, 2>("m_axi_split_wready");
  mp_m_axi_split_wready->in_port(m_axi_wready);
  mp_m_axi_split_wready->out_port[0](m_axi_split_wready_out_0);
    mp_m_axi_split_wready->add_mask(0,1,0);
  mp_m_axi_split_bresp = new xsc::xsc_split<4, 2>("m_axi_split_bresp");
  mp_m_axi_split_bresp->in_port(m_axi_bresp);
  mp_m_axi_split_bresp->out_port[0](m_axi_split_bresp_out_0);
    mp_m_axi_split_bresp->add_mask(0,2,0);
  mp_m_axi_split_bvalid = new xsc::xsc_split<2, 2>("m_axi_split_bvalid");
  mp_m_axi_split_bvalid->in_port(m_axi_bvalid);
  mp_m_axi_split_bvalid->out_port[0](m_axi_split_bvalid_out_0);
    mp_m_axi_split_bvalid->add_mask(0,1,0);
  mp_m_axi_concat_bready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_bready");
  mp_m_axi_concat_bready->in_port[0](m_axi_concat_bready_out_0);
  mp_m_axi_concat_bready->out_port(m_axi_bready);
    mp_m_axi_concat_bready->offset_port(0, 0);
  mp_m_axi_concat_araddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_araddr");
  mp_m_axi_concat_araddr->in_port[0](m_axi_concat_araddr_out_0);
  mp_m_axi_concat_araddr->out_port(m_axi_araddr);
    mp_m_axi_concat_araddr->offset_port(0, 0);
  mp_m_axi_concat_arlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_arlen");
  mp_m_axi_concat_arlen->in_port[0](m_axi_concat_arlen_out_0);
  mp_m_axi_concat_arlen->out_port(m_axi_arlen);
    mp_m_axi_concat_arlen->offset_port(0, 0);
  mp_m_axi_concat_arsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arsize");
  mp_m_axi_concat_arsize->in_port[0](m_axi_concat_arsize_out_0);
  mp_m_axi_concat_arsize->out_port(m_axi_arsize);
    mp_m_axi_concat_arsize->offset_port(0, 0);
  mp_m_axi_concat_arburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_arburst");
  mp_m_axi_concat_arburst->in_port[0](m_axi_concat_arburst_out_0);
  mp_m_axi_concat_arburst->out_port(m_axi_arburst);
    mp_m_axi_concat_arburst->offset_port(0, 0);
  mp_m_axi_concat_arlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arlock");
  mp_m_axi_concat_arlock->in_port[0](m_axi_concat_arlock_out_0);
  mp_m_axi_concat_arlock->out_port(m_axi_arlock);
    mp_m_axi_concat_arlock->offset_port(0, 0);
  mp_m_axi_concat_arcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arcache");
  mp_m_axi_concat_arcache->in_port[0](m_axi_concat_arcache_out_0);
  mp_m_axi_concat_arcache->out_port(m_axi_arcache);
    mp_m_axi_concat_arcache->offset_port(0, 0);
  mp_m_axi_concat_arprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arprot");
  mp_m_axi_concat_arprot->in_port[0](m_axi_concat_arprot_out_0);
  mp_m_axi_concat_arprot->out_port(m_axi_arprot);
    mp_m_axi_concat_arprot->offset_port(0, 0);
  mp_m_axi_concat_arregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arregion");
  mp_m_axi_concat_arregion->in_port[0](m_axi_concat_arregion_out_0);
  mp_m_axi_concat_arregion->out_port(m_axi_arregion);
    mp_m_axi_concat_arregion->offset_port(0, 0);
  mp_m_axi_concat_arqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arqos");
  mp_m_axi_concat_arqos->in_port[0](m_axi_concat_arqos_out_0);
  mp_m_axi_concat_arqos->out_port(m_axi_arqos);
    mp_m_axi_concat_arqos->offset_port(0, 0);
  mp_m_axi_concat_arvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arvalid");
  mp_m_axi_concat_arvalid->in_port[0](m_axi_concat_arvalid_out_0);
  mp_m_axi_concat_arvalid->out_port(m_axi_arvalid);
    mp_m_axi_concat_arvalid->offset_port(0, 0);
  mp_m_axi_split_arready = new xsc::xsc_split<2, 2>("m_axi_split_arready");
  mp_m_axi_split_arready->in_port(m_axi_arready);
  mp_m_axi_split_arready->out_port[0](m_axi_split_arready_out_0);
    mp_m_axi_split_arready->add_mask(0,1,0);
  mp_m_axi_split_rdata = new xsc::xsc_split<64, 2>("m_axi_split_rdata");
  mp_m_axi_split_rdata->in_port(m_axi_rdata);
  mp_m_axi_split_rdata->out_port[0](m_axi_split_rdata_out_0);
    mp_m_axi_split_rdata->add_mask(0,32,0);
  mp_m_axi_split_rresp = new xsc::xsc_split<4, 2>("m_axi_split_rresp");
  mp_m_axi_split_rresp->in_port(m_axi_rresp);
  mp_m_axi_split_rresp->out_port[0](m_axi_split_rresp_out_0);
    mp_m_axi_split_rresp->add_mask(0,2,0);
  mp_m_axi_split_rlast = new xsc::xsc_split<2, 2>("m_axi_split_rlast");
  mp_m_axi_split_rlast->in_port(m_axi_rlast);
  mp_m_axi_split_rlast->out_port[0](m_axi_split_rlast_out_0);
    mp_m_axi_split_rlast->add_mask(0,1,0);
  mp_m_axi_split_rvalid = new xsc::xsc_split<2, 2>("m_axi_split_rvalid");
  mp_m_axi_split_rvalid->in_port(m_axi_rvalid);
  mp_m_axi_split_rvalid->out_port[0](m_axi_split_rvalid_out_0);
    mp_m_axi_split_rvalid->add_mask(0,1,0);
  mp_m_axi_concat_rready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_rready");
  mp_m_axi_concat_rready->in_port[0](m_axi_concat_rready_out_0);
  mp_m_axi_concat_rready->out_port(m_axi_rready);
    mp_m_axi_concat_rready->offset_port(0, 0);
  mp_m_axi_concat_awaddr->in_port[1](m_axi_concat_awaddr_out_1);
  mp_m_axi_concat_awaddr->offset_port(1, 32);
  mp_m_axi_concat_awlen->in_port[1](m_axi_concat_awlen_out_1);
  mp_m_axi_concat_awlen->offset_port(1, 8);
  mp_m_axi_concat_awsize->in_port[1](m_axi_concat_awsize_out_1);
  mp_m_axi_concat_awsize->offset_port(1, 3);
  mp_m_axi_concat_awburst->in_port[1](m_axi_concat_awburst_out_1);
  mp_m_axi_concat_awburst->offset_port(1, 2);
  mp_m_axi_concat_awlock->in_port[1](m_axi_concat_awlock_out_1);
  mp_m_axi_concat_awlock->offset_port(1, 1);
  mp_m_axi_concat_awcache->in_port[1](m_axi_concat_awcache_out_1);
  mp_m_axi_concat_awcache->offset_port(1, 4);
  mp_m_axi_concat_awprot->in_port[1](m_axi_concat_awprot_out_1);
  mp_m_axi_concat_awprot->offset_port(1, 3);
  mp_m_axi_concat_awregion->in_port[1](m_axi_concat_awregion_out_1);
  mp_m_axi_concat_awregion->offset_port(1, 4);
  mp_m_axi_concat_awqos->in_port[1](m_axi_concat_awqos_out_1);
  mp_m_axi_concat_awqos->offset_port(1, 4);
  mp_m_axi_concat_awvalid->in_port[1](m_axi_concat_awvalid_out_1);
  mp_m_axi_concat_awvalid->offset_port(1, 1);
  
  mp_m_axi_split_awready->out_port[1](m_axi_split_awready_out_1);
    mp_m_axi_split_awready->add_mask(1,2,1);
  mp_m_axi_concat_wdata->in_port[1](m_axi_concat_wdata_out_1);
  mp_m_axi_concat_wdata->offset_port(1, 32);
  mp_m_axi_concat_wstrb->in_port[1](m_axi_concat_wstrb_out_1);
  mp_m_axi_concat_wstrb->offset_port(1, 4);
  mp_m_axi_concat_wlast->in_port[1](m_axi_concat_wlast_out_1);
  mp_m_axi_concat_wlast->offset_port(1, 1);
  mp_m_axi_concat_wvalid->in_port[1](m_axi_concat_wvalid_out_1);
  mp_m_axi_concat_wvalid->offset_port(1, 1);
  
  mp_m_axi_split_wready->out_port[1](m_axi_split_wready_out_1);
    mp_m_axi_split_wready->add_mask(1,2,1);
  
  mp_m_axi_split_bresp->out_port[1](m_axi_split_bresp_out_1);
    mp_m_axi_split_bresp->add_mask(1,4,2);
  
  mp_m_axi_split_bvalid->out_port[1](m_axi_split_bvalid_out_1);
    mp_m_axi_split_bvalid->add_mask(1,2,1);
  mp_m_axi_concat_bready->in_port[1](m_axi_concat_bready_out_1);
  mp_m_axi_concat_bready->offset_port(1, 1);
  mp_m_axi_concat_araddr->in_port[1](m_axi_concat_araddr_out_1);
  mp_m_axi_concat_araddr->offset_port(1, 32);
  mp_m_axi_concat_arlen->in_port[1](m_axi_concat_arlen_out_1);
  mp_m_axi_concat_arlen->offset_port(1, 8);
  mp_m_axi_concat_arsize->in_port[1](m_axi_concat_arsize_out_1);
  mp_m_axi_concat_arsize->offset_port(1, 3);
  mp_m_axi_concat_arburst->in_port[1](m_axi_concat_arburst_out_1);
  mp_m_axi_concat_arburst->offset_port(1, 2);
  mp_m_axi_concat_arlock->in_port[1](m_axi_concat_arlock_out_1);
  mp_m_axi_concat_arlock->offset_port(1, 1);
  mp_m_axi_concat_arcache->in_port[1](m_axi_concat_arcache_out_1);
  mp_m_axi_concat_arcache->offset_port(1, 4);
  mp_m_axi_concat_arprot->in_port[1](m_axi_concat_arprot_out_1);
  mp_m_axi_concat_arprot->offset_port(1, 3);
  mp_m_axi_concat_arregion->in_port[1](m_axi_concat_arregion_out_1);
  mp_m_axi_concat_arregion->offset_port(1, 4);
  mp_m_axi_concat_arqos->in_port[1](m_axi_concat_arqos_out_1);
  mp_m_axi_concat_arqos->offset_port(1, 4);
  mp_m_axi_concat_arvalid->in_port[1](m_axi_concat_arvalid_out_1);
  mp_m_axi_concat_arvalid->offset_port(1, 1);
  
  mp_m_axi_split_arready->out_port[1](m_axi_split_arready_out_1);
    mp_m_axi_split_arready->add_mask(1,2,1);
  
  mp_m_axi_split_rdata->out_port[1](m_axi_split_rdata_out_1);
    mp_m_axi_split_rdata->add_mask(1,64,32);
  
  mp_m_axi_split_rresp->out_port[1](m_axi_split_rresp_out_1);
    mp_m_axi_split_rresp->add_mask(1,4,2);
  
  mp_m_axi_split_rlast->out_port[1](m_axi_split_rlast_out_1);
    mp_m_axi_split_rlast->add_mask(1,2,1);
  
  mp_m_axi_split_rvalid->out_port[1](m_axi_split_rvalid_out_1);
    mp_m_axi_split_rvalid->add_mask(1,2,1);
  mp_m_axi_concat_rready->in_port[1](m_axi_concat_rready_out_1);
  mp_m_axi_concat_rready->offset_port(1, 1);

  // initialize socket stubs

}

void zynq_example_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(s_axi_awid);
    mp_S00_AXI_transactor->AWADDR(s_axi_awaddr);
    mp_S00_AXI_transactor->AWLEN(s_axi_awlen);
    mp_S00_AXI_transactor->AWSIZE(s_axi_awsize);
    mp_S00_AXI_transactor->AWBURST(s_axi_awburst);
    mp_s_axi_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awlock_converter");
    mp_s_axi_awlock_converter->vector_in(s_axi_awlock);
    mp_s_axi_awlock_converter->scalar_out(m_s_axi_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_s_axi_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(s_axi_awcache);
    mp_S00_AXI_transactor->AWPROT(s_axi_awprot);
    mp_S00_AXI_transactor->AWQOS(s_axi_awqos);
    mp_s_axi_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awvalid_converter");
    mp_s_axi_awvalid_converter->vector_in(s_axi_awvalid);
    mp_s_axi_awvalid_converter->scalar_out(m_s_axi_awvalid_converter_signal);
    mp_S00_AXI_transactor->AWVALID(m_s_axi_awvalid_converter_signal);
    mp_s_axi_awready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_awready_converter");
    mp_s_axi_awready_converter->scalar_in(m_s_axi_awready_converter_signal);
    mp_s_axi_awready_converter->vector_out(s_axi_awready);
    mp_S00_AXI_transactor->AWREADY(m_s_axi_awready_converter_signal);
    mp_S00_AXI_transactor->WDATA(s_axi_wdata);
    mp_S00_AXI_transactor->WSTRB(s_axi_wstrb);
    mp_s_axi_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wlast_converter");
    mp_s_axi_wlast_converter->vector_in(s_axi_wlast);
    mp_s_axi_wlast_converter->scalar_out(m_s_axi_wlast_converter_signal);
    mp_S00_AXI_transactor->WLAST(m_s_axi_wlast_converter_signal);
    mp_s_axi_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wvalid_converter");
    mp_s_axi_wvalid_converter->vector_in(s_axi_wvalid);
    mp_s_axi_wvalid_converter->scalar_out(m_s_axi_wvalid_converter_signal);
    mp_S00_AXI_transactor->WVALID(m_s_axi_wvalid_converter_signal);
    mp_s_axi_wready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_wready_converter");
    mp_s_axi_wready_converter->scalar_in(m_s_axi_wready_converter_signal);
    mp_s_axi_wready_converter->vector_out(s_axi_wready);
    mp_S00_AXI_transactor->WREADY(m_s_axi_wready_converter_signal);
    mp_S00_AXI_transactor->BID(s_axi_bid);
    mp_S00_AXI_transactor->BRESP(s_axi_bresp);
    mp_s_axi_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_bvalid_converter");
    mp_s_axi_bvalid_converter->scalar_in(m_s_axi_bvalid_converter_signal);
    mp_s_axi_bvalid_converter->vector_out(s_axi_bvalid);
    mp_S00_AXI_transactor->BVALID(m_s_axi_bvalid_converter_signal);
    mp_s_axi_bready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_bready_converter");
    mp_s_axi_bready_converter->vector_in(s_axi_bready);
    mp_s_axi_bready_converter->scalar_out(m_s_axi_bready_converter_signal);
    mp_S00_AXI_transactor->BREADY(m_s_axi_bready_converter_signal);
    mp_S00_AXI_transactor->ARID(s_axi_arid);
    mp_S00_AXI_transactor->ARADDR(s_axi_araddr);
    mp_S00_AXI_transactor->ARLEN(s_axi_arlen);
    mp_S00_AXI_transactor->ARSIZE(s_axi_arsize);
    mp_S00_AXI_transactor->ARBURST(s_axi_arburst);
    mp_s_axi_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arlock_converter");
    mp_s_axi_arlock_converter->vector_in(s_axi_arlock);
    mp_s_axi_arlock_converter->scalar_out(m_s_axi_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_s_axi_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(s_axi_arcache);
    mp_S00_AXI_transactor->ARPROT(s_axi_arprot);
    mp_S00_AXI_transactor->ARQOS(s_axi_arqos);
    mp_s_axi_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arvalid_converter");
    mp_s_axi_arvalid_converter->vector_in(s_axi_arvalid);
    mp_s_axi_arvalid_converter->scalar_out(m_s_axi_arvalid_converter_signal);
    mp_S00_AXI_transactor->ARVALID(m_s_axi_arvalid_converter_signal);
    mp_s_axi_arready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_arready_converter");
    mp_s_axi_arready_converter->scalar_in(m_s_axi_arready_converter_signal);
    mp_s_axi_arready_converter->vector_out(s_axi_arready);
    mp_S00_AXI_transactor->ARREADY(m_s_axi_arready_converter_signal);
    mp_S00_AXI_transactor->RID(s_axi_rid);
    mp_S00_AXI_transactor->RDATA(s_axi_rdata);
    mp_S00_AXI_transactor->RRESP(s_axi_rresp);
    mp_s_axi_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rlast_converter");
    mp_s_axi_rlast_converter->scalar_in(m_s_axi_rlast_converter_signal);
    mp_s_axi_rlast_converter->vector_out(s_axi_rlast);
    mp_S00_AXI_transactor->RLAST(m_s_axi_rlast_converter_signal);
    mp_s_axi_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rvalid_converter");
    mp_s_axi_rvalid_converter->scalar_in(m_s_axi_rvalid_converter_signal);
    mp_s_axi_rvalid_converter->vector_out(s_axi_rvalid);
    mp_S00_AXI_transactor->RVALID(m_s_axi_rvalid_converter_signal);
    mp_s_axi_rready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_rready_converter");
    mp_s_axi_rready_converter->vector_in(s_axi_rready);
    mp_s_axi_rready_converter->scalar_out(m_s_axi_rready_converter_signal);
    mp_S00_AXI_transactor->RREADY(m_s_axi_rready_converter_signal);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->target_0_rd_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->target_0_wr_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_m_axi_awaddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_0");
    mp_m_axi_awaddr_converter_0->vector_in(m_m_axi_awaddr_converter_0_signal);
    mp_m_axi_awaddr_converter_0->vector_out(m_axi_concat_awaddr_out_0);
    mp_M00_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_0_signal);
    mp_m_axi_awlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_0");
    mp_m_axi_awlen_converter_0->vector_in(m_m_axi_awlen_converter_0_signal);
    mp_m_axi_awlen_converter_0->vector_out(m_axi_concat_awlen_out_0);
    mp_M00_AXI_transactor->AWLEN(m_m_axi_awlen_converter_0_signal);
    mp_m_axi_awsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_0");
    mp_m_axi_awsize_converter_0->vector_in(m_m_axi_awsize_converter_0_signal);
    mp_m_axi_awsize_converter_0->vector_out(m_axi_concat_awsize_out_0);
    mp_M00_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_0_signal);
    mp_m_axi_awburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_0");
    mp_m_axi_awburst_converter_0->vector_in(m_m_axi_awburst_converter_0_signal);
    mp_m_axi_awburst_converter_0->vector_out(m_axi_concat_awburst_out_0);
    mp_M00_AXI_transactor->AWBURST(m_m_axi_awburst_converter_0_signal);
    mp_m_axi_awlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_0");
    mp_m_axi_awlock_converter_0->scalar_in(m_m_axi_awlock_converter_0_signal);
    mp_m_axi_awlock_converter_0->vector_out(m_axi_concat_awlock_out_0);
    mp_M00_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_0_signal);
    mp_m_axi_awcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_0");
    mp_m_axi_awcache_converter_0->vector_in(m_m_axi_awcache_converter_0_signal);
    mp_m_axi_awcache_converter_0->vector_out(m_axi_concat_awcache_out_0);
    mp_M00_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_0_signal);
    mp_m_axi_awprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_0");
    mp_m_axi_awprot_converter_0->vector_in(m_m_axi_awprot_converter_0_signal);
    mp_m_axi_awprot_converter_0->vector_out(m_axi_concat_awprot_out_0);
    mp_M00_AXI_transactor->AWPROT(m_m_axi_awprot_converter_0_signal);
    mp_m_axi_awregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_0");
    mp_m_axi_awregion_converter_0->vector_in(m_m_axi_awregion_converter_0_signal);
    mp_m_axi_awregion_converter_0->vector_out(m_axi_concat_awregion_out_0);
    mp_M00_AXI_transactor->AWREGION(m_m_axi_awregion_converter_0_signal);
    mp_m_axi_awqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_0");
    mp_m_axi_awqos_converter_0->vector_in(m_m_axi_awqos_converter_0_signal);
    mp_m_axi_awqos_converter_0->vector_out(m_axi_concat_awqos_out_0);
    mp_M00_AXI_transactor->AWQOS(m_m_axi_awqos_converter_0_signal);
    mp_m_axi_awvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_0");
    mp_m_axi_awvalid_converter_0->scalar_in(m_m_axi_awvalid_converter_0_signal);
    mp_m_axi_awvalid_converter_0->vector_out(m_axi_concat_awvalid_out_0);
    mp_M00_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_0_signal);
    mp_m_axi_awready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_0");
    mp_m_axi_awready_converter_0->vector_in(m_axi_split_awready_out_0);
    mp_m_axi_awready_converter_0->scalar_out(m_m_axi_awready_converter_0_signal);
    mp_M00_AXI_transactor->AWREADY(m_m_axi_awready_converter_0_signal);
    mp_m_axi_wdata_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_0");
    mp_m_axi_wdata_converter_0->vector_in(m_m_axi_wdata_converter_0_signal);
    mp_m_axi_wdata_converter_0->vector_out(m_axi_concat_wdata_out_0);
    mp_M00_AXI_transactor->WDATA(m_m_axi_wdata_converter_0_signal);
    mp_m_axi_wstrb_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_0");
    mp_m_axi_wstrb_converter_0->vector_in(m_m_axi_wstrb_converter_0_signal);
    mp_m_axi_wstrb_converter_0->vector_out(m_axi_concat_wstrb_out_0);
    mp_M00_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_0_signal);
    mp_m_axi_wlast_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_0");
    mp_m_axi_wlast_converter_0->scalar_in(m_m_axi_wlast_converter_0_signal);
    mp_m_axi_wlast_converter_0->vector_out(m_axi_concat_wlast_out_0);
    mp_M00_AXI_transactor->WLAST(m_m_axi_wlast_converter_0_signal);
    mp_m_axi_wvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_0");
    mp_m_axi_wvalid_converter_0->scalar_in(m_m_axi_wvalid_converter_0_signal);
    mp_m_axi_wvalid_converter_0->vector_out(m_axi_concat_wvalid_out_0);
    mp_M00_AXI_transactor->WVALID(m_m_axi_wvalid_converter_0_signal);
    mp_m_axi_wready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_0");
    mp_m_axi_wready_converter_0->vector_in(m_axi_split_wready_out_0);
    mp_m_axi_wready_converter_0->scalar_out(m_m_axi_wready_converter_0_signal);
    mp_M00_AXI_transactor->WREADY(m_m_axi_wready_converter_0_signal);
    mp_m_axi_bresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_0");
    mp_m_axi_bresp_converter_0->vector_in(m_axi_split_bresp_out_0);
    mp_m_axi_bresp_converter_0->vector_out(m_m_axi_bresp_converter_0_signal);
    mp_M00_AXI_transactor->BRESP(m_m_axi_bresp_converter_0_signal);
    mp_m_axi_bvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_0");
    mp_m_axi_bvalid_converter_0->vector_in(m_axi_split_bvalid_out_0);
    mp_m_axi_bvalid_converter_0->scalar_out(m_m_axi_bvalid_converter_0_signal);
    mp_M00_AXI_transactor->BVALID(m_m_axi_bvalid_converter_0_signal);
    mp_m_axi_bready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_0");
    mp_m_axi_bready_converter_0->scalar_in(m_m_axi_bready_converter_0_signal);
    mp_m_axi_bready_converter_0->vector_out(m_axi_concat_bready_out_0);
    mp_M00_AXI_transactor->BREADY(m_m_axi_bready_converter_0_signal);
    mp_m_axi_araddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_0");
    mp_m_axi_araddr_converter_0->vector_in(m_m_axi_araddr_converter_0_signal);
    mp_m_axi_araddr_converter_0->vector_out(m_axi_concat_araddr_out_0);
    mp_M00_AXI_transactor->ARADDR(m_m_axi_araddr_converter_0_signal);
    mp_m_axi_arlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_0");
    mp_m_axi_arlen_converter_0->vector_in(m_m_axi_arlen_converter_0_signal);
    mp_m_axi_arlen_converter_0->vector_out(m_axi_concat_arlen_out_0);
    mp_M00_AXI_transactor->ARLEN(m_m_axi_arlen_converter_0_signal);
    mp_m_axi_arsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_0");
    mp_m_axi_arsize_converter_0->vector_in(m_m_axi_arsize_converter_0_signal);
    mp_m_axi_arsize_converter_0->vector_out(m_axi_concat_arsize_out_0);
    mp_M00_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_0_signal);
    mp_m_axi_arburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_0");
    mp_m_axi_arburst_converter_0->vector_in(m_m_axi_arburst_converter_0_signal);
    mp_m_axi_arburst_converter_0->vector_out(m_axi_concat_arburst_out_0);
    mp_M00_AXI_transactor->ARBURST(m_m_axi_arburst_converter_0_signal);
    mp_m_axi_arlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_0");
    mp_m_axi_arlock_converter_0->scalar_in(m_m_axi_arlock_converter_0_signal);
    mp_m_axi_arlock_converter_0->vector_out(m_axi_concat_arlock_out_0);
    mp_M00_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_0_signal);
    mp_m_axi_arcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_0");
    mp_m_axi_arcache_converter_0->vector_in(m_m_axi_arcache_converter_0_signal);
    mp_m_axi_arcache_converter_0->vector_out(m_axi_concat_arcache_out_0);
    mp_M00_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_0_signal);
    mp_m_axi_arprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_0");
    mp_m_axi_arprot_converter_0->vector_in(m_m_axi_arprot_converter_0_signal);
    mp_m_axi_arprot_converter_0->vector_out(m_axi_concat_arprot_out_0);
    mp_M00_AXI_transactor->ARPROT(m_m_axi_arprot_converter_0_signal);
    mp_m_axi_arregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_0");
    mp_m_axi_arregion_converter_0->vector_in(m_m_axi_arregion_converter_0_signal);
    mp_m_axi_arregion_converter_0->vector_out(m_axi_concat_arregion_out_0);
    mp_M00_AXI_transactor->ARREGION(m_m_axi_arregion_converter_0_signal);
    mp_m_axi_arqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_0");
    mp_m_axi_arqos_converter_0->vector_in(m_m_axi_arqos_converter_0_signal);
    mp_m_axi_arqos_converter_0->vector_out(m_axi_concat_arqos_out_0);
    mp_M00_AXI_transactor->ARQOS(m_m_axi_arqos_converter_0_signal);
    mp_m_axi_arvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_0");
    mp_m_axi_arvalid_converter_0->scalar_in(m_m_axi_arvalid_converter_0_signal);
    mp_m_axi_arvalid_converter_0->vector_out(m_axi_concat_arvalid_out_0);
    mp_M00_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_0_signal);
    mp_m_axi_arready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_0");
    mp_m_axi_arready_converter_0->vector_in(m_axi_split_arready_out_0);
    mp_m_axi_arready_converter_0->scalar_out(m_m_axi_arready_converter_0_signal);
    mp_M00_AXI_transactor->ARREADY(m_m_axi_arready_converter_0_signal);
    mp_m_axi_rdata_converter_0 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_0");
    mp_m_axi_rdata_converter_0->vector_in(m_axi_split_rdata_out_0);
    mp_m_axi_rdata_converter_0->vector_out(m_m_axi_rdata_converter_0_signal);
    mp_M00_AXI_transactor->RDATA(m_m_axi_rdata_converter_0_signal);
    mp_m_axi_rresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_0");
    mp_m_axi_rresp_converter_0->vector_in(m_axi_split_rresp_out_0);
    mp_m_axi_rresp_converter_0->vector_out(m_m_axi_rresp_converter_0_signal);
    mp_M00_AXI_transactor->RRESP(m_m_axi_rresp_converter_0_signal);
    mp_m_axi_rlast_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_0");
    mp_m_axi_rlast_converter_0->vector_in(m_axi_split_rlast_out_0);
    mp_m_axi_rlast_converter_0->scalar_out(m_m_axi_rlast_converter_0_signal);
    mp_M00_AXI_transactor->RLAST(m_m_axi_rlast_converter_0_signal);
    mp_m_axi_rvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_0");
    mp_m_axi_rvalid_converter_0->vector_in(m_axi_split_rvalid_out_0);
    mp_m_axi_rvalid_converter_0->scalar_out(m_m_axi_rvalid_converter_0_signal);
    mp_M00_AXI_transactor->RVALID(m_m_axi_rvalid_converter_0_signal);
    mp_m_axi_rready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_0");
    mp_m_axi_rready_converter_0->scalar_in(m_m_axi_rready_converter_0_signal);
    mp_m_axi_rready_converter_0->vector_out(m_axi_concat_rready_out_0);
    mp_M00_AXI_transactor->RREADY(m_m_axi_rready_converter_0_signal);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->initiator_0_rd_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->initiator_0_wr_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_m_axi_awaddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_1");
    mp_m_axi_awaddr_converter_1->vector_in(m_m_axi_awaddr_converter_1_signal);
    mp_m_axi_awaddr_converter_1->vector_out(m_axi_concat_awaddr_out_1);
    mp_M01_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_1_signal);
    mp_m_axi_awlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_1");
    mp_m_axi_awlen_converter_1->vector_in(m_m_axi_awlen_converter_1_signal);
    mp_m_axi_awlen_converter_1->vector_out(m_axi_concat_awlen_out_1);
    mp_M01_AXI_transactor->AWLEN(m_m_axi_awlen_converter_1_signal);
    mp_m_axi_awsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_1");
    mp_m_axi_awsize_converter_1->vector_in(m_m_axi_awsize_converter_1_signal);
    mp_m_axi_awsize_converter_1->vector_out(m_axi_concat_awsize_out_1);
    mp_M01_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_1_signal);
    mp_m_axi_awburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_1");
    mp_m_axi_awburst_converter_1->vector_in(m_m_axi_awburst_converter_1_signal);
    mp_m_axi_awburst_converter_1->vector_out(m_axi_concat_awburst_out_1);
    mp_M01_AXI_transactor->AWBURST(m_m_axi_awburst_converter_1_signal);
    mp_m_axi_awlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_1");
    mp_m_axi_awlock_converter_1->scalar_in(m_m_axi_awlock_converter_1_signal);
    mp_m_axi_awlock_converter_1->vector_out(m_axi_concat_awlock_out_1);
    mp_M01_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_1_signal);
    mp_m_axi_awcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_1");
    mp_m_axi_awcache_converter_1->vector_in(m_m_axi_awcache_converter_1_signal);
    mp_m_axi_awcache_converter_1->vector_out(m_axi_concat_awcache_out_1);
    mp_M01_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_1_signal);
    mp_m_axi_awprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_1");
    mp_m_axi_awprot_converter_1->vector_in(m_m_axi_awprot_converter_1_signal);
    mp_m_axi_awprot_converter_1->vector_out(m_axi_concat_awprot_out_1);
    mp_M01_AXI_transactor->AWPROT(m_m_axi_awprot_converter_1_signal);
    mp_m_axi_awregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_1");
    mp_m_axi_awregion_converter_1->vector_in(m_m_axi_awregion_converter_1_signal);
    mp_m_axi_awregion_converter_1->vector_out(m_axi_concat_awregion_out_1);
    mp_M01_AXI_transactor->AWREGION(m_m_axi_awregion_converter_1_signal);
    mp_m_axi_awqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_1");
    mp_m_axi_awqos_converter_1->vector_in(m_m_axi_awqos_converter_1_signal);
    mp_m_axi_awqos_converter_1->vector_out(m_axi_concat_awqos_out_1);
    mp_M01_AXI_transactor->AWQOS(m_m_axi_awqos_converter_1_signal);
    mp_m_axi_awvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_1");
    mp_m_axi_awvalid_converter_1->scalar_in(m_m_axi_awvalid_converter_1_signal);
    mp_m_axi_awvalid_converter_1->vector_out(m_axi_concat_awvalid_out_1);
    mp_M01_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_1_signal);
    mp_m_axi_awready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_1");
    mp_m_axi_awready_converter_1->vector_in(m_axi_split_awready_out_1);
    mp_m_axi_awready_converter_1->scalar_out(m_m_axi_awready_converter_1_signal);
    mp_M01_AXI_transactor->AWREADY(m_m_axi_awready_converter_1_signal);
    mp_m_axi_wdata_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_1");
    mp_m_axi_wdata_converter_1->vector_in(m_m_axi_wdata_converter_1_signal);
    mp_m_axi_wdata_converter_1->vector_out(m_axi_concat_wdata_out_1);
    mp_M01_AXI_transactor->WDATA(m_m_axi_wdata_converter_1_signal);
    mp_m_axi_wstrb_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_1");
    mp_m_axi_wstrb_converter_1->vector_in(m_m_axi_wstrb_converter_1_signal);
    mp_m_axi_wstrb_converter_1->vector_out(m_axi_concat_wstrb_out_1);
    mp_M01_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_1_signal);
    mp_m_axi_wlast_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_1");
    mp_m_axi_wlast_converter_1->scalar_in(m_m_axi_wlast_converter_1_signal);
    mp_m_axi_wlast_converter_1->vector_out(m_axi_concat_wlast_out_1);
    mp_M01_AXI_transactor->WLAST(m_m_axi_wlast_converter_1_signal);
    mp_m_axi_wvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_1");
    mp_m_axi_wvalid_converter_1->scalar_in(m_m_axi_wvalid_converter_1_signal);
    mp_m_axi_wvalid_converter_1->vector_out(m_axi_concat_wvalid_out_1);
    mp_M01_AXI_transactor->WVALID(m_m_axi_wvalid_converter_1_signal);
    mp_m_axi_wready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_1");
    mp_m_axi_wready_converter_1->vector_in(m_axi_split_wready_out_1);
    mp_m_axi_wready_converter_1->scalar_out(m_m_axi_wready_converter_1_signal);
    mp_M01_AXI_transactor->WREADY(m_m_axi_wready_converter_1_signal);
    mp_m_axi_bresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_1");
    mp_m_axi_bresp_converter_1->vector_in(m_axi_split_bresp_out_1);
    mp_m_axi_bresp_converter_1->vector_out(m_m_axi_bresp_converter_1_signal);
    mp_M01_AXI_transactor->BRESP(m_m_axi_bresp_converter_1_signal);
    mp_m_axi_bvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_1");
    mp_m_axi_bvalid_converter_1->vector_in(m_axi_split_bvalid_out_1);
    mp_m_axi_bvalid_converter_1->scalar_out(m_m_axi_bvalid_converter_1_signal);
    mp_M01_AXI_transactor->BVALID(m_m_axi_bvalid_converter_1_signal);
    mp_m_axi_bready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_1");
    mp_m_axi_bready_converter_1->scalar_in(m_m_axi_bready_converter_1_signal);
    mp_m_axi_bready_converter_1->vector_out(m_axi_concat_bready_out_1);
    mp_M01_AXI_transactor->BREADY(m_m_axi_bready_converter_1_signal);
    mp_m_axi_araddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_1");
    mp_m_axi_araddr_converter_1->vector_in(m_m_axi_araddr_converter_1_signal);
    mp_m_axi_araddr_converter_1->vector_out(m_axi_concat_araddr_out_1);
    mp_M01_AXI_transactor->ARADDR(m_m_axi_araddr_converter_1_signal);
    mp_m_axi_arlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_1");
    mp_m_axi_arlen_converter_1->vector_in(m_m_axi_arlen_converter_1_signal);
    mp_m_axi_arlen_converter_1->vector_out(m_axi_concat_arlen_out_1);
    mp_M01_AXI_transactor->ARLEN(m_m_axi_arlen_converter_1_signal);
    mp_m_axi_arsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_1");
    mp_m_axi_arsize_converter_1->vector_in(m_m_axi_arsize_converter_1_signal);
    mp_m_axi_arsize_converter_1->vector_out(m_axi_concat_arsize_out_1);
    mp_M01_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_1_signal);
    mp_m_axi_arburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_1");
    mp_m_axi_arburst_converter_1->vector_in(m_m_axi_arburst_converter_1_signal);
    mp_m_axi_arburst_converter_1->vector_out(m_axi_concat_arburst_out_1);
    mp_M01_AXI_transactor->ARBURST(m_m_axi_arburst_converter_1_signal);
    mp_m_axi_arlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_1");
    mp_m_axi_arlock_converter_1->scalar_in(m_m_axi_arlock_converter_1_signal);
    mp_m_axi_arlock_converter_1->vector_out(m_axi_concat_arlock_out_1);
    mp_M01_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_1_signal);
    mp_m_axi_arcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_1");
    mp_m_axi_arcache_converter_1->vector_in(m_m_axi_arcache_converter_1_signal);
    mp_m_axi_arcache_converter_1->vector_out(m_axi_concat_arcache_out_1);
    mp_M01_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_1_signal);
    mp_m_axi_arprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_1");
    mp_m_axi_arprot_converter_1->vector_in(m_m_axi_arprot_converter_1_signal);
    mp_m_axi_arprot_converter_1->vector_out(m_axi_concat_arprot_out_1);
    mp_M01_AXI_transactor->ARPROT(m_m_axi_arprot_converter_1_signal);
    mp_m_axi_arregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_1");
    mp_m_axi_arregion_converter_1->vector_in(m_m_axi_arregion_converter_1_signal);
    mp_m_axi_arregion_converter_1->vector_out(m_axi_concat_arregion_out_1);
    mp_M01_AXI_transactor->ARREGION(m_m_axi_arregion_converter_1_signal);
    mp_m_axi_arqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_1");
    mp_m_axi_arqos_converter_1->vector_in(m_m_axi_arqos_converter_1_signal);
    mp_m_axi_arqos_converter_1->vector_out(m_axi_concat_arqos_out_1);
    mp_M01_AXI_transactor->ARQOS(m_m_axi_arqos_converter_1_signal);
    mp_m_axi_arvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_1");
    mp_m_axi_arvalid_converter_1->scalar_in(m_m_axi_arvalid_converter_1_signal);
    mp_m_axi_arvalid_converter_1->vector_out(m_axi_concat_arvalid_out_1);
    mp_M01_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_1_signal);
    mp_m_axi_arready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_1");
    mp_m_axi_arready_converter_1->vector_in(m_axi_split_arready_out_1);
    mp_m_axi_arready_converter_1->scalar_out(m_m_axi_arready_converter_1_signal);
    mp_M01_AXI_transactor->ARREADY(m_m_axi_arready_converter_1_signal);
    mp_m_axi_rdata_converter_1 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_1");
    mp_m_axi_rdata_converter_1->vector_in(m_axi_split_rdata_out_1);
    mp_m_axi_rdata_converter_1->vector_out(m_m_axi_rdata_converter_1_signal);
    mp_M01_AXI_transactor->RDATA(m_m_axi_rdata_converter_1_signal);
    mp_m_axi_rresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_1");
    mp_m_axi_rresp_converter_1->vector_in(m_axi_split_rresp_out_1);
    mp_m_axi_rresp_converter_1->vector_out(m_m_axi_rresp_converter_1_signal);
    mp_M01_AXI_transactor->RRESP(m_m_axi_rresp_converter_1_signal);
    mp_m_axi_rlast_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_1");
    mp_m_axi_rlast_converter_1->vector_in(m_axi_split_rlast_out_1);
    mp_m_axi_rlast_converter_1->scalar_out(m_m_axi_rlast_converter_1_signal);
    mp_M01_AXI_transactor->RLAST(m_m_axi_rlast_converter_1_signal);
    mp_m_axi_rvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_1");
    mp_m_axi_rvalid_converter_1->vector_in(m_axi_split_rvalid_out_1);
    mp_m_axi_rvalid_converter_1->scalar_out(m_m_axi_rvalid_converter_1_signal);
    mp_M01_AXI_transactor->RVALID(m_m_axi_rvalid_converter_1_signal);
    mp_m_axi_rready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_1");
    mp_m_axi_rready_converter_1->scalar_in(m_m_axi_rready_converter_1_signal);
    mp_m_axi_rready_converter_1->vector_out(m_axi_concat_rready_out_1);
    mp_M01_AXI_transactor->RREADY(m_m_axi_rready_converter_1_signal);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->initiator_1_rd_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->initiator_1_wr_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
zynq_example_xbar_0::zynq_example_xbar_0(const sc_core::sc_module_name& nm) : zynq_example_xbar_0_sc(nm), aclk("aclk"), aresetn("aresetn"), s_axi_awid("s_axi_awid"), s_axi_awaddr("s_axi_awaddr"), s_axi_awlen("s_axi_awlen"), s_axi_awsize("s_axi_awsize"), s_axi_awburst("s_axi_awburst"), s_axi_awlock("s_axi_awlock"), s_axi_awcache("s_axi_awcache"), s_axi_awprot("s_axi_awprot"), s_axi_awqos("s_axi_awqos"), s_axi_awvalid("s_axi_awvalid"), s_axi_awready("s_axi_awready"), s_axi_wdata("s_axi_wdata"), s_axi_wstrb("s_axi_wstrb"), s_axi_wlast("s_axi_wlast"), s_axi_wvalid("s_axi_wvalid"), s_axi_wready("s_axi_wready"), s_axi_bid("s_axi_bid"), s_axi_bresp("s_axi_bresp"), s_axi_bvalid("s_axi_bvalid"), s_axi_bready("s_axi_bready"), s_axi_arid("s_axi_arid"), s_axi_araddr("s_axi_araddr"), s_axi_arlen("s_axi_arlen"), s_axi_arsize("s_axi_arsize"), s_axi_arburst("s_axi_arburst"), s_axi_arlock("s_axi_arlock"), s_axi_arcache("s_axi_arcache"), s_axi_arprot("s_axi_arprot"), s_axi_arqos("s_axi_arqos"), s_axi_arvalid("s_axi_arvalid"), s_axi_arready("s_axi_arready"), s_axi_rid("s_axi_rid"), s_axi_rdata("s_axi_rdata"), s_axi_rresp("s_axi_rresp"), s_axi_rlast("s_axi_rlast"), s_axi_rvalid("s_axi_rvalid"), s_axi_rready("s_axi_rready"), m_axi_awaddr("m_axi_awaddr"), m_axi_awlen("m_axi_awlen"), m_axi_awsize("m_axi_awsize"), m_axi_awburst("m_axi_awburst"), m_axi_awlock("m_axi_awlock"), m_axi_awcache("m_axi_awcache"), m_axi_awprot("m_axi_awprot"), m_axi_awregion("m_axi_awregion"), m_axi_awqos("m_axi_awqos"), m_axi_awvalid("m_axi_awvalid"), m_axi_awready("m_axi_awready"), m_axi_wdata("m_axi_wdata"), m_axi_wstrb("m_axi_wstrb"), m_axi_wlast("m_axi_wlast"), m_axi_wvalid("m_axi_wvalid"), m_axi_wready("m_axi_wready"), m_axi_bresp("m_axi_bresp"), m_axi_bvalid("m_axi_bvalid"), m_axi_bready("m_axi_bready"), m_axi_araddr("m_axi_araddr"), m_axi_arlen("m_axi_arlen"), m_axi_arsize("m_axi_arsize"), m_axi_arburst("m_axi_arburst"), m_axi_arlock("m_axi_arlock"), m_axi_arcache("m_axi_arcache"), m_axi_arprot("m_axi_arprot"), m_axi_arregion("m_axi_arregion"), m_axi_arqos("m_axi_arqos"), m_axi_arvalid("m_axi_arvalid"), m_axi_arready("m_axi_arready"), m_axi_rdata("m_axi_rdata"), m_axi_rresp("m_axi_rresp"), m_axi_rlast("m_axi_rlast"), m_axi_rvalid("m_axi_rvalid"), m_axi_rready("m_axi_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_s_axi_awlock_converter = NULL;
  mp_s_axi_awvalid_converter = NULL;
  mp_s_axi_awready_converter = NULL;
  mp_s_axi_wlast_converter = NULL;
  mp_s_axi_wvalid_converter = NULL;
  mp_s_axi_wready_converter = NULL;
  mp_s_axi_bvalid_converter = NULL;
  mp_s_axi_bready_converter = NULL;
  mp_s_axi_arlock_converter = NULL;
  mp_s_axi_arvalid_converter = NULL;
  mp_s_axi_arready_converter = NULL;
  mp_s_axi_rlast_converter = NULL;
  mp_s_axi_rvalid_converter = NULL;
  mp_s_axi_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_0 = NULL;
  mp_m_axi_awlen_converter_0 = NULL;
  mp_m_axi_awsize_converter_0 = NULL;
  mp_m_axi_awburst_converter_0 = NULL;
  mp_m_axi_awlock_converter_0 = NULL;
  mp_m_axi_awcache_converter_0 = NULL;
  mp_m_axi_awprot_converter_0 = NULL;
  mp_m_axi_awregion_converter_0 = NULL;
  mp_m_axi_awqos_converter_0 = NULL;
  mp_m_axi_awvalid_converter_0 = NULL;
  mp_m_axi_awready_converter_0 = NULL;
  mp_m_axi_wdata_converter_0 = NULL;
  mp_m_axi_wstrb_converter_0 = NULL;
  mp_m_axi_wlast_converter_0 = NULL;
  mp_m_axi_wvalid_converter_0 = NULL;
  mp_m_axi_wready_converter_0 = NULL;
  mp_m_axi_bresp_converter_0 = NULL;
  mp_m_axi_bvalid_converter_0 = NULL;
  mp_m_axi_bready_converter_0 = NULL;
  mp_m_axi_araddr_converter_0 = NULL;
  mp_m_axi_arlen_converter_0 = NULL;
  mp_m_axi_arsize_converter_0 = NULL;
  mp_m_axi_arburst_converter_0 = NULL;
  mp_m_axi_arlock_converter_0 = NULL;
  mp_m_axi_arcache_converter_0 = NULL;
  mp_m_axi_arprot_converter_0 = NULL;
  mp_m_axi_arregion_converter_0 = NULL;
  mp_m_axi_arqos_converter_0 = NULL;
  mp_m_axi_arvalid_converter_0 = NULL;
  mp_m_axi_arready_converter_0 = NULL;
  mp_m_axi_rdata_converter_0 = NULL;
  mp_m_axi_rresp_converter_0 = NULL;
  mp_m_axi_rlast_converter_0 = NULL;
  mp_m_axi_rvalid_converter_0 = NULL;
  mp_m_axi_rready_converter_0 = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_1 = NULL;
  mp_m_axi_awlen_converter_1 = NULL;
  mp_m_axi_awsize_converter_1 = NULL;
  mp_m_axi_awburst_converter_1 = NULL;
  mp_m_axi_awlock_converter_1 = NULL;
  mp_m_axi_awcache_converter_1 = NULL;
  mp_m_axi_awprot_converter_1 = NULL;
  mp_m_axi_awregion_converter_1 = NULL;
  mp_m_axi_awqos_converter_1 = NULL;
  mp_m_axi_awvalid_converter_1 = NULL;
  mp_m_axi_awready_converter_1 = NULL;
  mp_m_axi_wdata_converter_1 = NULL;
  mp_m_axi_wstrb_converter_1 = NULL;
  mp_m_axi_wlast_converter_1 = NULL;
  mp_m_axi_wvalid_converter_1 = NULL;
  mp_m_axi_wready_converter_1 = NULL;
  mp_m_axi_bresp_converter_1 = NULL;
  mp_m_axi_bvalid_converter_1 = NULL;
  mp_m_axi_bready_converter_1 = NULL;
  mp_m_axi_araddr_converter_1 = NULL;
  mp_m_axi_arlen_converter_1 = NULL;
  mp_m_axi_arsize_converter_1 = NULL;
  mp_m_axi_arburst_converter_1 = NULL;
  mp_m_axi_arlock_converter_1 = NULL;
  mp_m_axi_arcache_converter_1 = NULL;
  mp_m_axi_arprot_converter_1 = NULL;
  mp_m_axi_arregion_converter_1 = NULL;
  mp_m_axi_arqos_converter_1 = NULL;
  mp_m_axi_arvalid_converter_1 = NULL;
  mp_m_axi_arready_converter_1 = NULL;
  mp_m_axi_rdata_converter_1 = NULL;
  mp_m_axi_rresp_converter_1 = NULL;
  mp_m_axi_rlast_converter_1 = NULL;
  mp_m_axi_rvalid_converter_1 = NULL;
  mp_m_axi_rready_converter_1 = NULL;

  // initialize junctures
  mp_m_axi_concat_araddr = NULL;
  mp_m_axi_concat_arburst = NULL;
  mp_m_axi_concat_arcache = NULL;
  mp_m_axi_concat_arlen = NULL;
  mp_m_axi_concat_arlock = NULL;
  mp_m_axi_concat_arprot = NULL;
  mp_m_axi_concat_arqos = NULL;
  mp_m_axi_concat_arregion = NULL;
  mp_m_axi_concat_arsize = NULL;
  mp_m_axi_concat_arvalid = NULL;
  mp_m_axi_concat_awaddr = NULL;
  mp_m_axi_concat_awburst = NULL;
  mp_m_axi_concat_awcache = NULL;
  mp_m_axi_concat_awlen = NULL;
  mp_m_axi_concat_awlock = NULL;
  mp_m_axi_concat_awprot = NULL;
  mp_m_axi_concat_awqos = NULL;
  mp_m_axi_concat_awregion = NULL;
  mp_m_axi_concat_awsize = NULL;
  mp_m_axi_concat_awvalid = NULL;
  mp_m_axi_concat_bready = NULL;
  mp_m_axi_concat_rready = NULL;
  mp_m_axi_concat_wdata = NULL;
  mp_m_axi_concat_wlast = NULL;
  mp_m_axi_concat_wstrb = NULL;
  mp_m_axi_concat_wvalid = NULL;
  mp_m_axi_split_arready = NULL;
  mp_m_axi_split_awready = NULL;
  mp_m_axi_split_bresp = NULL;
  mp_m_axi_split_bvalid = NULL;
  mp_m_axi_split_rdata = NULL;
  mp_m_axi_split_rlast = NULL;
  mp_m_axi_split_rresp = NULL;
  mp_m_axi_split_rvalid = NULL;
  mp_m_axi_split_wready = NULL;
  mp_m_axi_concat_awaddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_awaddr");
  mp_m_axi_concat_awaddr->in_port[0](m_axi_concat_awaddr_out_0);
  mp_m_axi_concat_awaddr->out_port(m_axi_awaddr);
    mp_m_axi_concat_awaddr->offset_port(0, 0);
  mp_m_axi_concat_awlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_awlen");
  mp_m_axi_concat_awlen->in_port[0](m_axi_concat_awlen_out_0);
  mp_m_axi_concat_awlen->out_port(m_axi_awlen);
    mp_m_axi_concat_awlen->offset_port(0, 0);
  mp_m_axi_concat_awsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awsize");
  mp_m_axi_concat_awsize->in_port[0](m_axi_concat_awsize_out_0);
  mp_m_axi_concat_awsize->out_port(m_axi_awsize);
    mp_m_axi_concat_awsize->offset_port(0, 0);
  mp_m_axi_concat_awburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_awburst");
  mp_m_axi_concat_awburst->in_port[0](m_axi_concat_awburst_out_0);
  mp_m_axi_concat_awburst->out_port(m_axi_awburst);
    mp_m_axi_concat_awburst->offset_port(0, 0);
  mp_m_axi_concat_awlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awlock");
  mp_m_axi_concat_awlock->in_port[0](m_axi_concat_awlock_out_0);
  mp_m_axi_concat_awlock->out_port(m_axi_awlock);
    mp_m_axi_concat_awlock->offset_port(0, 0);
  mp_m_axi_concat_awcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awcache");
  mp_m_axi_concat_awcache->in_port[0](m_axi_concat_awcache_out_0);
  mp_m_axi_concat_awcache->out_port(m_axi_awcache);
    mp_m_axi_concat_awcache->offset_port(0, 0);
  mp_m_axi_concat_awprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awprot");
  mp_m_axi_concat_awprot->in_port[0](m_axi_concat_awprot_out_0);
  mp_m_axi_concat_awprot->out_port(m_axi_awprot);
    mp_m_axi_concat_awprot->offset_port(0, 0);
  mp_m_axi_concat_awregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awregion");
  mp_m_axi_concat_awregion->in_port[0](m_axi_concat_awregion_out_0);
  mp_m_axi_concat_awregion->out_port(m_axi_awregion);
    mp_m_axi_concat_awregion->offset_port(0, 0);
  mp_m_axi_concat_awqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awqos");
  mp_m_axi_concat_awqos->in_port[0](m_axi_concat_awqos_out_0);
  mp_m_axi_concat_awqos->out_port(m_axi_awqos);
    mp_m_axi_concat_awqos->offset_port(0, 0);
  mp_m_axi_concat_awvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awvalid");
  mp_m_axi_concat_awvalid->in_port[0](m_axi_concat_awvalid_out_0);
  mp_m_axi_concat_awvalid->out_port(m_axi_awvalid);
    mp_m_axi_concat_awvalid->offset_port(0, 0);
  mp_m_axi_split_awready = new xsc::xsc_split<2, 2>("m_axi_split_awready");
  mp_m_axi_split_awready->in_port(m_axi_awready);
  mp_m_axi_split_awready->out_port[0](m_axi_split_awready_out_0);
    mp_m_axi_split_awready->add_mask(0,1,0);
  mp_m_axi_concat_wdata = new xsc::xsc_concatenator<64, 2>("m_axi_concat_wdata");
  mp_m_axi_concat_wdata->in_port[0](m_axi_concat_wdata_out_0);
  mp_m_axi_concat_wdata->out_port(m_axi_wdata);
    mp_m_axi_concat_wdata->offset_port(0, 0);
  mp_m_axi_concat_wstrb = new xsc::xsc_concatenator<8, 2>("m_axi_concat_wstrb");
  mp_m_axi_concat_wstrb->in_port[0](m_axi_concat_wstrb_out_0);
  mp_m_axi_concat_wstrb->out_port(m_axi_wstrb);
    mp_m_axi_concat_wstrb->offset_port(0, 0);
  mp_m_axi_concat_wlast = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wlast");
  mp_m_axi_concat_wlast->in_port[0](m_axi_concat_wlast_out_0);
  mp_m_axi_concat_wlast->out_port(m_axi_wlast);
    mp_m_axi_concat_wlast->offset_port(0, 0);
  mp_m_axi_concat_wvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wvalid");
  mp_m_axi_concat_wvalid->in_port[0](m_axi_concat_wvalid_out_0);
  mp_m_axi_concat_wvalid->out_port(m_axi_wvalid);
    mp_m_axi_concat_wvalid->offset_port(0, 0);
  mp_m_axi_split_wready = new xsc::xsc_split<2, 2>("m_axi_split_wready");
  mp_m_axi_split_wready->in_port(m_axi_wready);
  mp_m_axi_split_wready->out_port[0](m_axi_split_wready_out_0);
    mp_m_axi_split_wready->add_mask(0,1,0);
  mp_m_axi_split_bresp = new xsc::xsc_split<4, 2>("m_axi_split_bresp");
  mp_m_axi_split_bresp->in_port(m_axi_bresp);
  mp_m_axi_split_bresp->out_port[0](m_axi_split_bresp_out_0);
    mp_m_axi_split_bresp->add_mask(0,2,0);
  mp_m_axi_split_bvalid = new xsc::xsc_split<2, 2>("m_axi_split_bvalid");
  mp_m_axi_split_bvalid->in_port(m_axi_bvalid);
  mp_m_axi_split_bvalid->out_port[0](m_axi_split_bvalid_out_0);
    mp_m_axi_split_bvalid->add_mask(0,1,0);
  mp_m_axi_concat_bready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_bready");
  mp_m_axi_concat_bready->in_port[0](m_axi_concat_bready_out_0);
  mp_m_axi_concat_bready->out_port(m_axi_bready);
    mp_m_axi_concat_bready->offset_port(0, 0);
  mp_m_axi_concat_araddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_araddr");
  mp_m_axi_concat_araddr->in_port[0](m_axi_concat_araddr_out_0);
  mp_m_axi_concat_araddr->out_port(m_axi_araddr);
    mp_m_axi_concat_araddr->offset_port(0, 0);
  mp_m_axi_concat_arlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_arlen");
  mp_m_axi_concat_arlen->in_port[0](m_axi_concat_arlen_out_0);
  mp_m_axi_concat_arlen->out_port(m_axi_arlen);
    mp_m_axi_concat_arlen->offset_port(0, 0);
  mp_m_axi_concat_arsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arsize");
  mp_m_axi_concat_arsize->in_port[0](m_axi_concat_arsize_out_0);
  mp_m_axi_concat_arsize->out_port(m_axi_arsize);
    mp_m_axi_concat_arsize->offset_port(0, 0);
  mp_m_axi_concat_arburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_arburst");
  mp_m_axi_concat_arburst->in_port[0](m_axi_concat_arburst_out_0);
  mp_m_axi_concat_arburst->out_port(m_axi_arburst);
    mp_m_axi_concat_arburst->offset_port(0, 0);
  mp_m_axi_concat_arlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arlock");
  mp_m_axi_concat_arlock->in_port[0](m_axi_concat_arlock_out_0);
  mp_m_axi_concat_arlock->out_port(m_axi_arlock);
    mp_m_axi_concat_arlock->offset_port(0, 0);
  mp_m_axi_concat_arcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arcache");
  mp_m_axi_concat_arcache->in_port[0](m_axi_concat_arcache_out_0);
  mp_m_axi_concat_arcache->out_port(m_axi_arcache);
    mp_m_axi_concat_arcache->offset_port(0, 0);
  mp_m_axi_concat_arprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arprot");
  mp_m_axi_concat_arprot->in_port[0](m_axi_concat_arprot_out_0);
  mp_m_axi_concat_arprot->out_port(m_axi_arprot);
    mp_m_axi_concat_arprot->offset_port(0, 0);
  mp_m_axi_concat_arregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arregion");
  mp_m_axi_concat_arregion->in_port[0](m_axi_concat_arregion_out_0);
  mp_m_axi_concat_arregion->out_port(m_axi_arregion);
    mp_m_axi_concat_arregion->offset_port(0, 0);
  mp_m_axi_concat_arqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arqos");
  mp_m_axi_concat_arqos->in_port[0](m_axi_concat_arqos_out_0);
  mp_m_axi_concat_arqos->out_port(m_axi_arqos);
    mp_m_axi_concat_arqos->offset_port(0, 0);
  mp_m_axi_concat_arvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arvalid");
  mp_m_axi_concat_arvalid->in_port[0](m_axi_concat_arvalid_out_0);
  mp_m_axi_concat_arvalid->out_port(m_axi_arvalid);
    mp_m_axi_concat_arvalid->offset_port(0, 0);
  mp_m_axi_split_arready = new xsc::xsc_split<2, 2>("m_axi_split_arready");
  mp_m_axi_split_arready->in_port(m_axi_arready);
  mp_m_axi_split_arready->out_port[0](m_axi_split_arready_out_0);
    mp_m_axi_split_arready->add_mask(0,1,0);
  mp_m_axi_split_rdata = new xsc::xsc_split<64, 2>("m_axi_split_rdata");
  mp_m_axi_split_rdata->in_port(m_axi_rdata);
  mp_m_axi_split_rdata->out_port[0](m_axi_split_rdata_out_0);
    mp_m_axi_split_rdata->add_mask(0,32,0);
  mp_m_axi_split_rresp = new xsc::xsc_split<4, 2>("m_axi_split_rresp");
  mp_m_axi_split_rresp->in_port(m_axi_rresp);
  mp_m_axi_split_rresp->out_port[0](m_axi_split_rresp_out_0);
    mp_m_axi_split_rresp->add_mask(0,2,0);
  mp_m_axi_split_rlast = new xsc::xsc_split<2, 2>("m_axi_split_rlast");
  mp_m_axi_split_rlast->in_port(m_axi_rlast);
  mp_m_axi_split_rlast->out_port[0](m_axi_split_rlast_out_0);
    mp_m_axi_split_rlast->add_mask(0,1,0);
  mp_m_axi_split_rvalid = new xsc::xsc_split<2, 2>("m_axi_split_rvalid");
  mp_m_axi_split_rvalid->in_port(m_axi_rvalid);
  mp_m_axi_split_rvalid->out_port[0](m_axi_split_rvalid_out_0);
    mp_m_axi_split_rvalid->add_mask(0,1,0);
  mp_m_axi_concat_rready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_rready");
  mp_m_axi_concat_rready->in_port[0](m_axi_concat_rready_out_0);
  mp_m_axi_concat_rready->out_port(m_axi_rready);
    mp_m_axi_concat_rready->offset_port(0, 0);
  mp_m_axi_concat_awaddr->in_port[1](m_axi_concat_awaddr_out_1);
  mp_m_axi_concat_awaddr->offset_port(1, 32);
  mp_m_axi_concat_awlen->in_port[1](m_axi_concat_awlen_out_1);
  mp_m_axi_concat_awlen->offset_port(1, 8);
  mp_m_axi_concat_awsize->in_port[1](m_axi_concat_awsize_out_1);
  mp_m_axi_concat_awsize->offset_port(1, 3);
  mp_m_axi_concat_awburst->in_port[1](m_axi_concat_awburst_out_1);
  mp_m_axi_concat_awburst->offset_port(1, 2);
  mp_m_axi_concat_awlock->in_port[1](m_axi_concat_awlock_out_1);
  mp_m_axi_concat_awlock->offset_port(1, 1);
  mp_m_axi_concat_awcache->in_port[1](m_axi_concat_awcache_out_1);
  mp_m_axi_concat_awcache->offset_port(1, 4);
  mp_m_axi_concat_awprot->in_port[1](m_axi_concat_awprot_out_1);
  mp_m_axi_concat_awprot->offset_port(1, 3);
  mp_m_axi_concat_awregion->in_port[1](m_axi_concat_awregion_out_1);
  mp_m_axi_concat_awregion->offset_port(1, 4);
  mp_m_axi_concat_awqos->in_port[1](m_axi_concat_awqos_out_1);
  mp_m_axi_concat_awqos->offset_port(1, 4);
  mp_m_axi_concat_awvalid->in_port[1](m_axi_concat_awvalid_out_1);
  mp_m_axi_concat_awvalid->offset_port(1, 1);
  
  mp_m_axi_split_awready->out_port[1](m_axi_split_awready_out_1);
    mp_m_axi_split_awready->add_mask(1,2,1);
  mp_m_axi_concat_wdata->in_port[1](m_axi_concat_wdata_out_1);
  mp_m_axi_concat_wdata->offset_port(1, 32);
  mp_m_axi_concat_wstrb->in_port[1](m_axi_concat_wstrb_out_1);
  mp_m_axi_concat_wstrb->offset_port(1, 4);
  mp_m_axi_concat_wlast->in_port[1](m_axi_concat_wlast_out_1);
  mp_m_axi_concat_wlast->offset_port(1, 1);
  mp_m_axi_concat_wvalid->in_port[1](m_axi_concat_wvalid_out_1);
  mp_m_axi_concat_wvalid->offset_port(1, 1);
  
  mp_m_axi_split_wready->out_port[1](m_axi_split_wready_out_1);
    mp_m_axi_split_wready->add_mask(1,2,1);
  
  mp_m_axi_split_bresp->out_port[1](m_axi_split_bresp_out_1);
    mp_m_axi_split_bresp->add_mask(1,4,2);
  
  mp_m_axi_split_bvalid->out_port[1](m_axi_split_bvalid_out_1);
    mp_m_axi_split_bvalid->add_mask(1,2,1);
  mp_m_axi_concat_bready->in_port[1](m_axi_concat_bready_out_1);
  mp_m_axi_concat_bready->offset_port(1, 1);
  mp_m_axi_concat_araddr->in_port[1](m_axi_concat_araddr_out_1);
  mp_m_axi_concat_araddr->offset_port(1, 32);
  mp_m_axi_concat_arlen->in_port[1](m_axi_concat_arlen_out_1);
  mp_m_axi_concat_arlen->offset_port(1, 8);
  mp_m_axi_concat_arsize->in_port[1](m_axi_concat_arsize_out_1);
  mp_m_axi_concat_arsize->offset_port(1, 3);
  mp_m_axi_concat_arburst->in_port[1](m_axi_concat_arburst_out_1);
  mp_m_axi_concat_arburst->offset_port(1, 2);
  mp_m_axi_concat_arlock->in_port[1](m_axi_concat_arlock_out_1);
  mp_m_axi_concat_arlock->offset_port(1, 1);
  mp_m_axi_concat_arcache->in_port[1](m_axi_concat_arcache_out_1);
  mp_m_axi_concat_arcache->offset_port(1, 4);
  mp_m_axi_concat_arprot->in_port[1](m_axi_concat_arprot_out_1);
  mp_m_axi_concat_arprot->offset_port(1, 3);
  mp_m_axi_concat_arregion->in_port[1](m_axi_concat_arregion_out_1);
  mp_m_axi_concat_arregion->offset_port(1, 4);
  mp_m_axi_concat_arqos->in_port[1](m_axi_concat_arqos_out_1);
  mp_m_axi_concat_arqos->offset_port(1, 4);
  mp_m_axi_concat_arvalid->in_port[1](m_axi_concat_arvalid_out_1);
  mp_m_axi_concat_arvalid->offset_port(1, 1);
  
  mp_m_axi_split_arready->out_port[1](m_axi_split_arready_out_1);
    mp_m_axi_split_arready->add_mask(1,2,1);
  
  mp_m_axi_split_rdata->out_port[1](m_axi_split_rdata_out_1);
    mp_m_axi_split_rdata->add_mask(1,64,32);
  
  mp_m_axi_split_rresp->out_port[1](m_axi_split_rresp_out_1);
    mp_m_axi_split_rresp->add_mask(1,4,2);
  
  mp_m_axi_split_rlast->out_port[1](m_axi_split_rlast_out_1);
    mp_m_axi_split_rlast->add_mask(1,2,1);
  
  mp_m_axi_split_rvalid->out_port[1](m_axi_split_rvalid_out_1);
    mp_m_axi_split_rvalid->add_mask(1,2,1);
  mp_m_axi_concat_rready->in_port[1](m_axi_concat_rready_out_1);
  mp_m_axi_concat_rready->offset_port(1, 1);

  // initialize socket stubs

}

void zynq_example_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(s_axi_awid);
    mp_S00_AXI_transactor->AWADDR(s_axi_awaddr);
    mp_S00_AXI_transactor->AWLEN(s_axi_awlen);
    mp_S00_AXI_transactor->AWSIZE(s_axi_awsize);
    mp_S00_AXI_transactor->AWBURST(s_axi_awburst);
    mp_s_axi_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awlock_converter");
    mp_s_axi_awlock_converter->vector_in(s_axi_awlock);
    mp_s_axi_awlock_converter->scalar_out(m_s_axi_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_s_axi_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(s_axi_awcache);
    mp_S00_AXI_transactor->AWPROT(s_axi_awprot);
    mp_S00_AXI_transactor->AWQOS(s_axi_awqos);
    mp_s_axi_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awvalid_converter");
    mp_s_axi_awvalid_converter->vector_in(s_axi_awvalid);
    mp_s_axi_awvalid_converter->scalar_out(m_s_axi_awvalid_converter_signal);
    mp_S00_AXI_transactor->AWVALID(m_s_axi_awvalid_converter_signal);
    mp_s_axi_awready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_awready_converter");
    mp_s_axi_awready_converter->scalar_in(m_s_axi_awready_converter_signal);
    mp_s_axi_awready_converter->vector_out(s_axi_awready);
    mp_S00_AXI_transactor->AWREADY(m_s_axi_awready_converter_signal);
    mp_S00_AXI_transactor->WDATA(s_axi_wdata);
    mp_S00_AXI_transactor->WSTRB(s_axi_wstrb);
    mp_s_axi_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wlast_converter");
    mp_s_axi_wlast_converter->vector_in(s_axi_wlast);
    mp_s_axi_wlast_converter->scalar_out(m_s_axi_wlast_converter_signal);
    mp_S00_AXI_transactor->WLAST(m_s_axi_wlast_converter_signal);
    mp_s_axi_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wvalid_converter");
    mp_s_axi_wvalid_converter->vector_in(s_axi_wvalid);
    mp_s_axi_wvalid_converter->scalar_out(m_s_axi_wvalid_converter_signal);
    mp_S00_AXI_transactor->WVALID(m_s_axi_wvalid_converter_signal);
    mp_s_axi_wready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_wready_converter");
    mp_s_axi_wready_converter->scalar_in(m_s_axi_wready_converter_signal);
    mp_s_axi_wready_converter->vector_out(s_axi_wready);
    mp_S00_AXI_transactor->WREADY(m_s_axi_wready_converter_signal);
    mp_S00_AXI_transactor->BID(s_axi_bid);
    mp_S00_AXI_transactor->BRESP(s_axi_bresp);
    mp_s_axi_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_bvalid_converter");
    mp_s_axi_bvalid_converter->scalar_in(m_s_axi_bvalid_converter_signal);
    mp_s_axi_bvalid_converter->vector_out(s_axi_bvalid);
    mp_S00_AXI_transactor->BVALID(m_s_axi_bvalid_converter_signal);
    mp_s_axi_bready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_bready_converter");
    mp_s_axi_bready_converter->vector_in(s_axi_bready);
    mp_s_axi_bready_converter->scalar_out(m_s_axi_bready_converter_signal);
    mp_S00_AXI_transactor->BREADY(m_s_axi_bready_converter_signal);
    mp_S00_AXI_transactor->ARID(s_axi_arid);
    mp_S00_AXI_transactor->ARADDR(s_axi_araddr);
    mp_S00_AXI_transactor->ARLEN(s_axi_arlen);
    mp_S00_AXI_transactor->ARSIZE(s_axi_arsize);
    mp_S00_AXI_transactor->ARBURST(s_axi_arburst);
    mp_s_axi_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arlock_converter");
    mp_s_axi_arlock_converter->vector_in(s_axi_arlock);
    mp_s_axi_arlock_converter->scalar_out(m_s_axi_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_s_axi_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(s_axi_arcache);
    mp_S00_AXI_transactor->ARPROT(s_axi_arprot);
    mp_S00_AXI_transactor->ARQOS(s_axi_arqos);
    mp_s_axi_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arvalid_converter");
    mp_s_axi_arvalid_converter->vector_in(s_axi_arvalid);
    mp_s_axi_arvalid_converter->scalar_out(m_s_axi_arvalid_converter_signal);
    mp_S00_AXI_transactor->ARVALID(m_s_axi_arvalid_converter_signal);
    mp_s_axi_arready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_arready_converter");
    mp_s_axi_arready_converter->scalar_in(m_s_axi_arready_converter_signal);
    mp_s_axi_arready_converter->vector_out(s_axi_arready);
    mp_S00_AXI_transactor->ARREADY(m_s_axi_arready_converter_signal);
    mp_S00_AXI_transactor->RID(s_axi_rid);
    mp_S00_AXI_transactor->RDATA(s_axi_rdata);
    mp_S00_AXI_transactor->RRESP(s_axi_rresp);
    mp_s_axi_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rlast_converter");
    mp_s_axi_rlast_converter->scalar_in(m_s_axi_rlast_converter_signal);
    mp_s_axi_rlast_converter->vector_out(s_axi_rlast);
    mp_S00_AXI_transactor->RLAST(m_s_axi_rlast_converter_signal);
    mp_s_axi_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rvalid_converter");
    mp_s_axi_rvalid_converter->scalar_in(m_s_axi_rvalid_converter_signal);
    mp_s_axi_rvalid_converter->vector_out(s_axi_rvalid);
    mp_S00_AXI_transactor->RVALID(m_s_axi_rvalid_converter_signal);
    mp_s_axi_rready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_rready_converter");
    mp_s_axi_rready_converter->vector_in(s_axi_rready);
    mp_s_axi_rready_converter->scalar_out(m_s_axi_rready_converter_signal);
    mp_S00_AXI_transactor->RREADY(m_s_axi_rready_converter_signal);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->target_0_rd_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->target_0_wr_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_m_axi_awaddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_0");
    mp_m_axi_awaddr_converter_0->vector_in(m_m_axi_awaddr_converter_0_signal);
    mp_m_axi_awaddr_converter_0->vector_out(m_axi_concat_awaddr_out_0);
    mp_M00_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_0_signal);
    mp_m_axi_awlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_0");
    mp_m_axi_awlen_converter_0->vector_in(m_m_axi_awlen_converter_0_signal);
    mp_m_axi_awlen_converter_0->vector_out(m_axi_concat_awlen_out_0);
    mp_M00_AXI_transactor->AWLEN(m_m_axi_awlen_converter_0_signal);
    mp_m_axi_awsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_0");
    mp_m_axi_awsize_converter_0->vector_in(m_m_axi_awsize_converter_0_signal);
    mp_m_axi_awsize_converter_0->vector_out(m_axi_concat_awsize_out_0);
    mp_M00_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_0_signal);
    mp_m_axi_awburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_0");
    mp_m_axi_awburst_converter_0->vector_in(m_m_axi_awburst_converter_0_signal);
    mp_m_axi_awburst_converter_0->vector_out(m_axi_concat_awburst_out_0);
    mp_M00_AXI_transactor->AWBURST(m_m_axi_awburst_converter_0_signal);
    mp_m_axi_awlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_0");
    mp_m_axi_awlock_converter_0->scalar_in(m_m_axi_awlock_converter_0_signal);
    mp_m_axi_awlock_converter_0->vector_out(m_axi_concat_awlock_out_0);
    mp_M00_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_0_signal);
    mp_m_axi_awcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_0");
    mp_m_axi_awcache_converter_0->vector_in(m_m_axi_awcache_converter_0_signal);
    mp_m_axi_awcache_converter_0->vector_out(m_axi_concat_awcache_out_0);
    mp_M00_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_0_signal);
    mp_m_axi_awprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_0");
    mp_m_axi_awprot_converter_0->vector_in(m_m_axi_awprot_converter_0_signal);
    mp_m_axi_awprot_converter_0->vector_out(m_axi_concat_awprot_out_0);
    mp_M00_AXI_transactor->AWPROT(m_m_axi_awprot_converter_0_signal);
    mp_m_axi_awregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_0");
    mp_m_axi_awregion_converter_0->vector_in(m_m_axi_awregion_converter_0_signal);
    mp_m_axi_awregion_converter_0->vector_out(m_axi_concat_awregion_out_0);
    mp_M00_AXI_transactor->AWREGION(m_m_axi_awregion_converter_0_signal);
    mp_m_axi_awqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_0");
    mp_m_axi_awqos_converter_0->vector_in(m_m_axi_awqos_converter_0_signal);
    mp_m_axi_awqos_converter_0->vector_out(m_axi_concat_awqos_out_0);
    mp_M00_AXI_transactor->AWQOS(m_m_axi_awqos_converter_0_signal);
    mp_m_axi_awvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_0");
    mp_m_axi_awvalid_converter_0->scalar_in(m_m_axi_awvalid_converter_0_signal);
    mp_m_axi_awvalid_converter_0->vector_out(m_axi_concat_awvalid_out_0);
    mp_M00_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_0_signal);
    mp_m_axi_awready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_0");
    mp_m_axi_awready_converter_0->vector_in(m_axi_split_awready_out_0);
    mp_m_axi_awready_converter_0->scalar_out(m_m_axi_awready_converter_0_signal);
    mp_M00_AXI_transactor->AWREADY(m_m_axi_awready_converter_0_signal);
    mp_m_axi_wdata_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_0");
    mp_m_axi_wdata_converter_0->vector_in(m_m_axi_wdata_converter_0_signal);
    mp_m_axi_wdata_converter_0->vector_out(m_axi_concat_wdata_out_0);
    mp_M00_AXI_transactor->WDATA(m_m_axi_wdata_converter_0_signal);
    mp_m_axi_wstrb_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_0");
    mp_m_axi_wstrb_converter_0->vector_in(m_m_axi_wstrb_converter_0_signal);
    mp_m_axi_wstrb_converter_0->vector_out(m_axi_concat_wstrb_out_0);
    mp_M00_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_0_signal);
    mp_m_axi_wlast_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_0");
    mp_m_axi_wlast_converter_0->scalar_in(m_m_axi_wlast_converter_0_signal);
    mp_m_axi_wlast_converter_0->vector_out(m_axi_concat_wlast_out_0);
    mp_M00_AXI_transactor->WLAST(m_m_axi_wlast_converter_0_signal);
    mp_m_axi_wvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_0");
    mp_m_axi_wvalid_converter_0->scalar_in(m_m_axi_wvalid_converter_0_signal);
    mp_m_axi_wvalid_converter_0->vector_out(m_axi_concat_wvalid_out_0);
    mp_M00_AXI_transactor->WVALID(m_m_axi_wvalid_converter_0_signal);
    mp_m_axi_wready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_0");
    mp_m_axi_wready_converter_0->vector_in(m_axi_split_wready_out_0);
    mp_m_axi_wready_converter_0->scalar_out(m_m_axi_wready_converter_0_signal);
    mp_M00_AXI_transactor->WREADY(m_m_axi_wready_converter_0_signal);
    mp_m_axi_bresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_0");
    mp_m_axi_bresp_converter_0->vector_in(m_axi_split_bresp_out_0);
    mp_m_axi_bresp_converter_0->vector_out(m_m_axi_bresp_converter_0_signal);
    mp_M00_AXI_transactor->BRESP(m_m_axi_bresp_converter_0_signal);
    mp_m_axi_bvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_0");
    mp_m_axi_bvalid_converter_0->vector_in(m_axi_split_bvalid_out_0);
    mp_m_axi_bvalid_converter_0->scalar_out(m_m_axi_bvalid_converter_0_signal);
    mp_M00_AXI_transactor->BVALID(m_m_axi_bvalid_converter_0_signal);
    mp_m_axi_bready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_0");
    mp_m_axi_bready_converter_0->scalar_in(m_m_axi_bready_converter_0_signal);
    mp_m_axi_bready_converter_0->vector_out(m_axi_concat_bready_out_0);
    mp_M00_AXI_transactor->BREADY(m_m_axi_bready_converter_0_signal);
    mp_m_axi_araddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_0");
    mp_m_axi_araddr_converter_0->vector_in(m_m_axi_araddr_converter_0_signal);
    mp_m_axi_araddr_converter_0->vector_out(m_axi_concat_araddr_out_0);
    mp_M00_AXI_transactor->ARADDR(m_m_axi_araddr_converter_0_signal);
    mp_m_axi_arlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_0");
    mp_m_axi_arlen_converter_0->vector_in(m_m_axi_arlen_converter_0_signal);
    mp_m_axi_arlen_converter_0->vector_out(m_axi_concat_arlen_out_0);
    mp_M00_AXI_transactor->ARLEN(m_m_axi_arlen_converter_0_signal);
    mp_m_axi_arsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_0");
    mp_m_axi_arsize_converter_0->vector_in(m_m_axi_arsize_converter_0_signal);
    mp_m_axi_arsize_converter_0->vector_out(m_axi_concat_arsize_out_0);
    mp_M00_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_0_signal);
    mp_m_axi_arburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_0");
    mp_m_axi_arburst_converter_0->vector_in(m_m_axi_arburst_converter_0_signal);
    mp_m_axi_arburst_converter_0->vector_out(m_axi_concat_arburst_out_0);
    mp_M00_AXI_transactor->ARBURST(m_m_axi_arburst_converter_0_signal);
    mp_m_axi_arlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_0");
    mp_m_axi_arlock_converter_0->scalar_in(m_m_axi_arlock_converter_0_signal);
    mp_m_axi_arlock_converter_0->vector_out(m_axi_concat_arlock_out_0);
    mp_M00_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_0_signal);
    mp_m_axi_arcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_0");
    mp_m_axi_arcache_converter_0->vector_in(m_m_axi_arcache_converter_0_signal);
    mp_m_axi_arcache_converter_0->vector_out(m_axi_concat_arcache_out_0);
    mp_M00_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_0_signal);
    mp_m_axi_arprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_0");
    mp_m_axi_arprot_converter_0->vector_in(m_m_axi_arprot_converter_0_signal);
    mp_m_axi_arprot_converter_0->vector_out(m_axi_concat_arprot_out_0);
    mp_M00_AXI_transactor->ARPROT(m_m_axi_arprot_converter_0_signal);
    mp_m_axi_arregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_0");
    mp_m_axi_arregion_converter_0->vector_in(m_m_axi_arregion_converter_0_signal);
    mp_m_axi_arregion_converter_0->vector_out(m_axi_concat_arregion_out_0);
    mp_M00_AXI_transactor->ARREGION(m_m_axi_arregion_converter_0_signal);
    mp_m_axi_arqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_0");
    mp_m_axi_arqos_converter_0->vector_in(m_m_axi_arqos_converter_0_signal);
    mp_m_axi_arqos_converter_0->vector_out(m_axi_concat_arqos_out_0);
    mp_M00_AXI_transactor->ARQOS(m_m_axi_arqos_converter_0_signal);
    mp_m_axi_arvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_0");
    mp_m_axi_arvalid_converter_0->scalar_in(m_m_axi_arvalid_converter_0_signal);
    mp_m_axi_arvalid_converter_0->vector_out(m_axi_concat_arvalid_out_0);
    mp_M00_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_0_signal);
    mp_m_axi_arready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_0");
    mp_m_axi_arready_converter_0->vector_in(m_axi_split_arready_out_0);
    mp_m_axi_arready_converter_0->scalar_out(m_m_axi_arready_converter_0_signal);
    mp_M00_AXI_transactor->ARREADY(m_m_axi_arready_converter_0_signal);
    mp_m_axi_rdata_converter_0 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_0");
    mp_m_axi_rdata_converter_0->vector_in(m_axi_split_rdata_out_0);
    mp_m_axi_rdata_converter_0->vector_out(m_m_axi_rdata_converter_0_signal);
    mp_M00_AXI_transactor->RDATA(m_m_axi_rdata_converter_0_signal);
    mp_m_axi_rresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_0");
    mp_m_axi_rresp_converter_0->vector_in(m_axi_split_rresp_out_0);
    mp_m_axi_rresp_converter_0->vector_out(m_m_axi_rresp_converter_0_signal);
    mp_M00_AXI_transactor->RRESP(m_m_axi_rresp_converter_0_signal);
    mp_m_axi_rlast_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_0");
    mp_m_axi_rlast_converter_0->vector_in(m_axi_split_rlast_out_0);
    mp_m_axi_rlast_converter_0->scalar_out(m_m_axi_rlast_converter_0_signal);
    mp_M00_AXI_transactor->RLAST(m_m_axi_rlast_converter_0_signal);
    mp_m_axi_rvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_0");
    mp_m_axi_rvalid_converter_0->vector_in(m_axi_split_rvalid_out_0);
    mp_m_axi_rvalid_converter_0->scalar_out(m_m_axi_rvalid_converter_0_signal);
    mp_M00_AXI_transactor->RVALID(m_m_axi_rvalid_converter_0_signal);
    mp_m_axi_rready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_0");
    mp_m_axi_rready_converter_0->scalar_in(m_m_axi_rready_converter_0_signal);
    mp_m_axi_rready_converter_0->vector_out(m_axi_concat_rready_out_0);
    mp_M00_AXI_transactor->RREADY(m_m_axi_rready_converter_0_signal);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->initiator_0_rd_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->initiator_0_wr_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_m_axi_awaddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_1");
    mp_m_axi_awaddr_converter_1->vector_in(m_m_axi_awaddr_converter_1_signal);
    mp_m_axi_awaddr_converter_1->vector_out(m_axi_concat_awaddr_out_1);
    mp_M01_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_1_signal);
    mp_m_axi_awlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_1");
    mp_m_axi_awlen_converter_1->vector_in(m_m_axi_awlen_converter_1_signal);
    mp_m_axi_awlen_converter_1->vector_out(m_axi_concat_awlen_out_1);
    mp_M01_AXI_transactor->AWLEN(m_m_axi_awlen_converter_1_signal);
    mp_m_axi_awsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_1");
    mp_m_axi_awsize_converter_1->vector_in(m_m_axi_awsize_converter_1_signal);
    mp_m_axi_awsize_converter_1->vector_out(m_axi_concat_awsize_out_1);
    mp_M01_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_1_signal);
    mp_m_axi_awburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_1");
    mp_m_axi_awburst_converter_1->vector_in(m_m_axi_awburst_converter_1_signal);
    mp_m_axi_awburst_converter_1->vector_out(m_axi_concat_awburst_out_1);
    mp_M01_AXI_transactor->AWBURST(m_m_axi_awburst_converter_1_signal);
    mp_m_axi_awlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_1");
    mp_m_axi_awlock_converter_1->scalar_in(m_m_axi_awlock_converter_1_signal);
    mp_m_axi_awlock_converter_1->vector_out(m_axi_concat_awlock_out_1);
    mp_M01_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_1_signal);
    mp_m_axi_awcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_1");
    mp_m_axi_awcache_converter_1->vector_in(m_m_axi_awcache_converter_1_signal);
    mp_m_axi_awcache_converter_1->vector_out(m_axi_concat_awcache_out_1);
    mp_M01_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_1_signal);
    mp_m_axi_awprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_1");
    mp_m_axi_awprot_converter_1->vector_in(m_m_axi_awprot_converter_1_signal);
    mp_m_axi_awprot_converter_1->vector_out(m_axi_concat_awprot_out_1);
    mp_M01_AXI_transactor->AWPROT(m_m_axi_awprot_converter_1_signal);
    mp_m_axi_awregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_1");
    mp_m_axi_awregion_converter_1->vector_in(m_m_axi_awregion_converter_1_signal);
    mp_m_axi_awregion_converter_1->vector_out(m_axi_concat_awregion_out_1);
    mp_M01_AXI_transactor->AWREGION(m_m_axi_awregion_converter_1_signal);
    mp_m_axi_awqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_1");
    mp_m_axi_awqos_converter_1->vector_in(m_m_axi_awqos_converter_1_signal);
    mp_m_axi_awqos_converter_1->vector_out(m_axi_concat_awqos_out_1);
    mp_M01_AXI_transactor->AWQOS(m_m_axi_awqos_converter_1_signal);
    mp_m_axi_awvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_1");
    mp_m_axi_awvalid_converter_1->scalar_in(m_m_axi_awvalid_converter_1_signal);
    mp_m_axi_awvalid_converter_1->vector_out(m_axi_concat_awvalid_out_1);
    mp_M01_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_1_signal);
    mp_m_axi_awready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_1");
    mp_m_axi_awready_converter_1->vector_in(m_axi_split_awready_out_1);
    mp_m_axi_awready_converter_1->scalar_out(m_m_axi_awready_converter_1_signal);
    mp_M01_AXI_transactor->AWREADY(m_m_axi_awready_converter_1_signal);
    mp_m_axi_wdata_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_1");
    mp_m_axi_wdata_converter_1->vector_in(m_m_axi_wdata_converter_1_signal);
    mp_m_axi_wdata_converter_1->vector_out(m_axi_concat_wdata_out_1);
    mp_M01_AXI_transactor->WDATA(m_m_axi_wdata_converter_1_signal);
    mp_m_axi_wstrb_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_1");
    mp_m_axi_wstrb_converter_1->vector_in(m_m_axi_wstrb_converter_1_signal);
    mp_m_axi_wstrb_converter_1->vector_out(m_axi_concat_wstrb_out_1);
    mp_M01_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_1_signal);
    mp_m_axi_wlast_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_1");
    mp_m_axi_wlast_converter_1->scalar_in(m_m_axi_wlast_converter_1_signal);
    mp_m_axi_wlast_converter_1->vector_out(m_axi_concat_wlast_out_1);
    mp_M01_AXI_transactor->WLAST(m_m_axi_wlast_converter_1_signal);
    mp_m_axi_wvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_1");
    mp_m_axi_wvalid_converter_1->scalar_in(m_m_axi_wvalid_converter_1_signal);
    mp_m_axi_wvalid_converter_1->vector_out(m_axi_concat_wvalid_out_1);
    mp_M01_AXI_transactor->WVALID(m_m_axi_wvalid_converter_1_signal);
    mp_m_axi_wready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_1");
    mp_m_axi_wready_converter_1->vector_in(m_axi_split_wready_out_1);
    mp_m_axi_wready_converter_1->scalar_out(m_m_axi_wready_converter_1_signal);
    mp_M01_AXI_transactor->WREADY(m_m_axi_wready_converter_1_signal);
    mp_m_axi_bresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_1");
    mp_m_axi_bresp_converter_1->vector_in(m_axi_split_bresp_out_1);
    mp_m_axi_bresp_converter_1->vector_out(m_m_axi_bresp_converter_1_signal);
    mp_M01_AXI_transactor->BRESP(m_m_axi_bresp_converter_1_signal);
    mp_m_axi_bvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_1");
    mp_m_axi_bvalid_converter_1->vector_in(m_axi_split_bvalid_out_1);
    mp_m_axi_bvalid_converter_1->scalar_out(m_m_axi_bvalid_converter_1_signal);
    mp_M01_AXI_transactor->BVALID(m_m_axi_bvalid_converter_1_signal);
    mp_m_axi_bready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_1");
    mp_m_axi_bready_converter_1->scalar_in(m_m_axi_bready_converter_1_signal);
    mp_m_axi_bready_converter_1->vector_out(m_axi_concat_bready_out_1);
    mp_M01_AXI_transactor->BREADY(m_m_axi_bready_converter_1_signal);
    mp_m_axi_araddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_1");
    mp_m_axi_araddr_converter_1->vector_in(m_m_axi_araddr_converter_1_signal);
    mp_m_axi_araddr_converter_1->vector_out(m_axi_concat_araddr_out_1);
    mp_M01_AXI_transactor->ARADDR(m_m_axi_araddr_converter_1_signal);
    mp_m_axi_arlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_1");
    mp_m_axi_arlen_converter_1->vector_in(m_m_axi_arlen_converter_1_signal);
    mp_m_axi_arlen_converter_1->vector_out(m_axi_concat_arlen_out_1);
    mp_M01_AXI_transactor->ARLEN(m_m_axi_arlen_converter_1_signal);
    mp_m_axi_arsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_1");
    mp_m_axi_arsize_converter_1->vector_in(m_m_axi_arsize_converter_1_signal);
    mp_m_axi_arsize_converter_1->vector_out(m_axi_concat_arsize_out_1);
    mp_M01_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_1_signal);
    mp_m_axi_arburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_1");
    mp_m_axi_arburst_converter_1->vector_in(m_m_axi_arburst_converter_1_signal);
    mp_m_axi_arburst_converter_1->vector_out(m_axi_concat_arburst_out_1);
    mp_M01_AXI_transactor->ARBURST(m_m_axi_arburst_converter_1_signal);
    mp_m_axi_arlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_1");
    mp_m_axi_arlock_converter_1->scalar_in(m_m_axi_arlock_converter_1_signal);
    mp_m_axi_arlock_converter_1->vector_out(m_axi_concat_arlock_out_1);
    mp_M01_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_1_signal);
    mp_m_axi_arcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_1");
    mp_m_axi_arcache_converter_1->vector_in(m_m_axi_arcache_converter_1_signal);
    mp_m_axi_arcache_converter_1->vector_out(m_axi_concat_arcache_out_1);
    mp_M01_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_1_signal);
    mp_m_axi_arprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_1");
    mp_m_axi_arprot_converter_1->vector_in(m_m_axi_arprot_converter_1_signal);
    mp_m_axi_arprot_converter_1->vector_out(m_axi_concat_arprot_out_1);
    mp_M01_AXI_transactor->ARPROT(m_m_axi_arprot_converter_1_signal);
    mp_m_axi_arregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_1");
    mp_m_axi_arregion_converter_1->vector_in(m_m_axi_arregion_converter_1_signal);
    mp_m_axi_arregion_converter_1->vector_out(m_axi_concat_arregion_out_1);
    mp_M01_AXI_transactor->ARREGION(m_m_axi_arregion_converter_1_signal);
    mp_m_axi_arqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_1");
    mp_m_axi_arqos_converter_1->vector_in(m_m_axi_arqos_converter_1_signal);
    mp_m_axi_arqos_converter_1->vector_out(m_axi_concat_arqos_out_1);
    mp_M01_AXI_transactor->ARQOS(m_m_axi_arqos_converter_1_signal);
    mp_m_axi_arvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_1");
    mp_m_axi_arvalid_converter_1->scalar_in(m_m_axi_arvalid_converter_1_signal);
    mp_m_axi_arvalid_converter_1->vector_out(m_axi_concat_arvalid_out_1);
    mp_M01_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_1_signal);
    mp_m_axi_arready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_1");
    mp_m_axi_arready_converter_1->vector_in(m_axi_split_arready_out_1);
    mp_m_axi_arready_converter_1->scalar_out(m_m_axi_arready_converter_1_signal);
    mp_M01_AXI_transactor->ARREADY(m_m_axi_arready_converter_1_signal);
    mp_m_axi_rdata_converter_1 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_1");
    mp_m_axi_rdata_converter_1->vector_in(m_axi_split_rdata_out_1);
    mp_m_axi_rdata_converter_1->vector_out(m_m_axi_rdata_converter_1_signal);
    mp_M01_AXI_transactor->RDATA(m_m_axi_rdata_converter_1_signal);
    mp_m_axi_rresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_1");
    mp_m_axi_rresp_converter_1->vector_in(m_axi_split_rresp_out_1);
    mp_m_axi_rresp_converter_1->vector_out(m_m_axi_rresp_converter_1_signal);
    mp_M01_AXI_transactor->RRESP(m_m_axi_rresp_converter_1_signal);
    mp_m_axi_rlast_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_1");
    mp_m_axi_rlast_converter_1->vector_in(m_axi_split_rlast_out_1);
    mp_m_axi_rlast_converter_1->scalar_out(m_m_axi_rlast_converter_1_signal);
    mp_M01_AXI_transactor->RLAST(m_m_axi_rlast_converter_1_signal);
    mp_m_axi_rvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_1");
    mp_m_axi_rvalid_converter_1->vector_in(m_axi_split_rvalid_out_1);
    mp_m_axi_rvalid_converter_1->scalar_out(m_m_axi_rvalid_converter_1_signal);
    mp_M01_AXI_transactor->RVALID(m_m_axi_rvalid_converter_1_signal);
    mp_m_axi_rready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_1");
    mp_m_axi_rready_converter_1->scalar_in(m_m_axi_rready_converter_1_signal);
    mp_m_axi_rready_converter_1->vector_out(m_axi_concat_rready_out_1);
    mp_M01_AXI_transactor->RREADY(m_m_axi_rready_converter_1_signal);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->initiator_1_rd_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->initiator_1_wr_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
zynq_example_xbar_0::zynq_example_xbar_0(const sc_core::sc_module_name& nm) : zynq_example_xbar_0_sc(nm), aclk("aclk"), aresetn("aresetn"), s_axi_awid("s_axi_awid"), s_axi_awaddr("s_axi_awaddr"), s_axi_awlen("s_axi_awlen"), s_axi_awsize("s_axi_awsize"), s_axi_awburst("s_axi_awburst"), s_axi_awlock("s_axi_awlock"), s_axi_awcache("s_axi_awcache"), s_axi_awprot("s_axi_awprot"), s_axi_awqos("s_axi_awqos"), s_axi_awvalid("s_axi_awvalid"), s_axi_awready("s_axi_awready"), s_axi_wdata("s_axi_wdata"), s_axi_wstrb("s_axi_wstrb"), s_axi_wlast("s_axi_wlast"), s_axi_wvalid("s_axi_wvalid"), s_axi_wready("s_axi_wready"), s_axi_bid("s_axi_bid"), s_axi_bresp("s_axi_bresp"), s_axi_bvalid("s_axi_bvalid"), s_axi_bready("s_axi_bready"), s_axi_arid("s_axi_arid"), s_axi_araddr("s_axi_araddr"), s_axi_arlen("s_axi_arlen"), s_axi_arsize("s_axi_arsize"), s_axi_arburst("s_axi_arburst"), s_axi_arlock("s_axi_arlock"), s_axi_arcache("s_axi_arcache"), s_axi_arprot("s_axi_arprot"), s_axi_arqos("s_axi_arqos"), s_axi_arvalid("s_axi_arvalid"), s_axi_arready("s_axi_arready"), s_axi_rid("s_axi_rid"), s_axi_rdata("s_axi_rdata"), s_axi_rresp("s_axi_rresp"), s_axi_rlast("s_axi_rlast"), s_axi_rvalid("s_axi_rvalid"), s_axi_rready("s_axi_rready"), m_axi_awaddr("m_axi_awaddr"), m_axi_awlen("m_axi_awlen"), m_axi_awsize("m_axi_awsize"), m_axi_awburst("m_axi_awburst"), m_axi_awlock("m_axi_awlock"), m_axi_awcache("m_axi_awcache"), m_axi_awprot("m_axi_awprot"), m_axi_awregion("m_axi_awregion"), m_axi_awqos("m_axi_awqos"), m_axi_awvalid("m_axi_awvalid"), m_axi_awready("m_axi_awready"), m_axi_wdata("m_axi_wdata"), m_axi_wstrb("m_axi_wstrb"), m_axi_wlast("m_axi_wlast"), m_axi_wvalid("m_axi_wvalid"), m_axi_wready("m_axi_wready"), m_axi_bresp("m_axi_bresp"), m_axi_bvalid("m_axi_bvalid"), m_axi_bready("m_axi_bready"), m_axi_araddr("m_axi_araddr"), m_axi_arlen("m_axi_arlen"), m_axi_arsize("m_axi_arsize"), m_axi_arburst("m_axi_arburst"), m_axi_arlock("m_axi_arlock"), m_axi_arcache("m_axi_arcache"), m_axi_arprot("m_axi_arprot"), m_axi_arregion("m_axi_arregion"), m_axi_arqos("m_axi_arqos"), m_axi_arvalid("m_axi_arvalid"), m_axi_arready("m_axi_arready"), m_axi_rdata("m_axi_rdata"), m_axi_rresp("m_axi_rresp"), m_axi_rlast("m_axi_rlast"), m_axi_rvalid("m_axi_rvalid"), m_axi_rready("m_axi_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_s_axi_awlock_converter = NULL;
  mp_s_axi_awvalid_converter = NULL;
  mp_s_axi_awready_converter = NULL;
  mp_s_axi_wlast_converter = NULL;
  mp_s_axi_wvalid_converter = NULL;
  mp_s_axi_wready_converter = NULL;
  mp_s_axi_bvalid_converter = NULL;
  mp_s_axi_bready_converter = NULL;
  mp_s_axi_arlock_converter = NULL;
  mp_s_axi_arvalid_converter = NULL;
  mp_s_axi_arready_converter = NULL;
  mp_s_axi_rlast_converter = NULL;
  mp_s_axi_rvalid_converter = NULL;
  mp_s_axi_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_0 = NULL;
  mp_m_axi_awlen_converter_0 = NULL;
  mp_m_axi_awsize_converter_0 = NULL;
  mp_m_axi_awburst_converter_0 = NULL;
  mp_m_axi_awlock_converter_0 = NULL;
  mp_m_axi_awcache_converter_0 = NULL;
  mp_m_axi_awprot_converter_0 = NULL;
  mp_m_axi_awregion_converter_0 = NULL;
  mp_m_axi_awqos_converter_0 = NULL;
  mp_m_axi_awvalid_converter_0 = NULL;
  mp_m_axi_awready_converter_0 = NULL;
  mp_m_axi_wdata_converter_0 = NULL;
  mp_m_axi_wstrb_converter_0 = NULL;
  mp_m_axi_wlast_converter_0 = NULL;
  mp_m_axi_wvalid_converter_0 = NULL;
  mp_m_axi_wready_converter_0 = NULL;
  mp_m_axi_bresp_converter_0 = NULL;
  mp_m_axi_bvalid_converter_0 = NULL;
  mp_m_axi_bready_converter_0 = NULL;
  mp_m_axi_araddr_converter_0 = NULL;
  mp_m_axi_arlen_converter_0 = NULL;
  mp_m_axi_arsize_converter_0 = NULL;
  mp_m_axi_arburst_converter_0 = NULL;
  mp_m_axi_arlock_converter_0 = NULL;
  mp_m_axi_arcache_converter_0 = NULL;
  mp_m_axi_arprot_converter_0 = NULL;
  mp_m_axi_arregion_converter_0 = NULL;
  mp_m_axi_arqos_converter_0 = NULL;
  mp_m_axi_arvalid_converter_0 = NULL;
  mp_m_axi_arready_converter_0 = NULL;
  mp_m_axi_rdata_converter_0 = NULL;
  mp_m_axi_rresp_converter_0 = NULL;
  mp_m_axi_rlast_converter_0 = NULL;
  mp_m_axi_rvalid_converter_0 = NULL;
  mp_m_axi_rready_converter_0 = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_1 = NULL;
  mp_m_axi_awlen_converter_1 = NULL;
  mp_m_axi_awsize_converter_1 = NULL;
  mp_m_axi_awburst_converter_1 = NULL;
  mp_m_axi_awlock_converter_1 = NULL;
  mp_m_axi_awcache_converter_1 = NULL;
  mp_m_axi_awprot_converter_1 = NULL;
  mp_m_axi_awregion_converter_1 = NULL;
  mp_m_axi_awqos_converter_1 = NULL;
  mp_m_axi_awvalid_converter_1 = NULL;
  mp_m_axi_awready_converter_1 = NULL;
  mp_m_axi_wdata_converter_1 = NULL;
  mp_m_axi_wstrb_converter_1 = NULL;
  mp_m_axi_wlast_converter_1 = NULL;
  mp_m_axi_wvalid_converter_1 = NULL;
  mp_m_axi_wready_converter_1 = NULL;
  mp_m_axi_bresp_converter_1 = NULL;
  mp_m_axi_bvalid_converter_1 = NULL;
  mp_m_axi_bready_converter_1 = NULL;
  mp_m_axi_araddr_converter_1 = NULL;
  mp_m_axi_arlen_converter_1 = NULL;
  mp_m_axi_arsize_converter_1 = NULL;
  mp_m_axi_arburst_converter_1 = NULL;
  mp_m_axi_arlock_converter_1 = NULL;
  mp_m_axi_arcache_converter_1 = NULL;
  mp_m_axi_arprot_converter_1 = NULL;
  mp_m_axi_arregion_converter_1 = NULL;
  mp_m_axi_arqos_converter_1 = NULL;
  mp_m_axi_arvalid_converter_1 = NULL;
  mp_m_axi_arready_converter_1 = NULL;
  mp_m_axi_rdata_converter_1 = NULL;
  mp_m_axi_rresp_converter_1 = NULL;
  mp_m_axi_rlast_converter_1 = NULL;
  mp_m_axi_rvalid_converter_1 = NULL;
  mp_m_axi_rready_converter_1 = NULL;

  // initialize junctures
  mp_m_axi_concat_araddr = NULL;
  mp_m_axi_concat_arburst = NULL;
  mp_m_axi_concat_arcache = NULL;
  mp_m_axi_concat_arlen = NULL;
  mp_m_axi_concat_arlock = NULL;
  mp_m_axi_concat_arprot = NULL;
  mp_m_axi_concat_arqos = NULL;
  mp_m_axi_concat_arregion = NULL;
  mp_m_axi_concat_arsize = NULL;
  mp_m_axi_concat_arvalid = NULL;
  mp_m_axi_concat_awaddr = NULL;
  mp_m_axi_concat_awburst = NULL;
  mp_m_axi_concat_awcache = NULL;
  mp_m_axi_concat_awlen = NULL;
  mp_m_axi_concat_awlock = NULL;
  mp_m_axi_concat_awprot = NULL;
  mp_m_axi_concat_awqos = NULL;
  mp_m_axi_concat_awregion = NULL;
  mp_m_axi_concat_awsize = NULL;
  mp_m_axi_concat_awvalid = NULL;
  mp_m_axi_concat_bready = NULL;
  mp_m_axi_concat_rready = NULL;
  mp_m_axi_concat_wdata = NULL;
  mp_m_axi_concat_wlast = NULL;
  mp_m_axi_concat_wstrb = NULL;
  mp_m_axi_concat_wvalid = NULL;
  mp_m_axi_split_arready = NULL;
  mp_m_axi_split_awready = NULL;
  mp_m_axi_split_bresp = NULL;
  mp_m_axi_split_bvalid = NULL;
  mp_m_axi_split_rdata = NULL;
  mp_m_axi_split_rlast = NULL;
  mp_m_axi_split_rresp = NULL;
  mp_m_axi_split_rvalid = NULL;
  mp_m_axi_split_wready = NULL;
  mp_m_axi_concat_awaddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_awaddr");
  mp_m_axi_concat_awaddr->in_port[0](m_axi_concat_awaddr_out_0);
  mp_m_axi_concat_awaddr->out_port(m_axi_awaddr);
    mp_m_axi_concat_awaddr->offset_port(0, 0);
  mp_m_axi_concat_awlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_awlen");
  mp_m_axi_concat_awlen->in_port[0](m_axi_concat_awlen_out_0);
  mp_m_axi_concat_awlen->out_port(m_axi_awlen);
    mp_m_axi_concat_awlen->offset_port(0, 0);
  mp_m_axi_concat_awsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awsize");
  mp_m_axi_concat_awsize->in_port[0](m_axi_concat_awsize_out_0);
  mp_m_axi_concat_awsize->out_port(m_axi_awsize);
    mp_m_axi_concat_awsize->offset_port(0, 0);
  mp_m_axi_concat_awburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_awburst");
  mp_m_axi_concat_awburst->in_port[0](m_axi_concat_awburst_out_0);
  mp_m_axi_concat_awburst->out_port(m_axi_awburst);
    mp_m_axi_concat_awburst->offset_port(0, 0);
  mp_m_axi_concat_awlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awlock");
  mp_m_axi_concat_awlock->in_port[0](m_axi_concat_awlock_out_0);
  mp_m_axi_concat_awlock->out_port(m_axi_awlock);
    mp_m_axi_concat_awlock->offset_port(0, 0);
  mp_m_axi_concat_awcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awcache");
  mp_m_axi_concat_awcache->in_port[0](m_axi_concat_awcache_out_0);
  mp_m_axi_concat_awcache->out_port(m_axi_awcache);
    mp_m_axi_concat_awcache->offset_port(0, 0);
  mp_m_axi_concat_awprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awprot");
  mp_m_axi_concat_awprot->in_port[0](m_axi_concat_awprot_out_0);
  mp_m_axi_concat_awprot->out_port(m_axi_awprot);
    mp_m_axi_concat_awprot->offset_port(0, 0);
  mp_m_axi_concat_awregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awregion");
  mp_m_axi_concat_awregion->in_port[0](m_axi_concat_awregion_out_0);
  mp_m_axi_concat_awregion->out_port(m_axi_awregion);
    mp_m_axi_concat_awregion->offset_port(0, 0);
  mp_m_axi_concat_awqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awqos");
  mp_m_axi_concat_awqos->in_port[0](m_axi_concat_awqos_out_0);
  mp_m_axi_concat_awqos->out_port(m_axi_awqos);
    mp_m_axi_concat_awqos->offset_port(0, 0);
  mp_m_axi_concat_awvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awvalid");
  mp_m_axi_concat_awvalid->in_port[0](m_axi_concat_awvalid_out_0);
  mp_m_axi_concat_awvalid->out_port(m_axi_awvalid);
    mp_m_axi_concat_awvalid->offset_port(0, 0);
  mp_m_axi_split_awready = new xsc::xsc_split<2, 2>("m_axi_split_awready");
  mp_m_axi_split_awready->in_port(m_axi_awready);
  mp_m_axi_split_awready->out_port[0](m_axi_split_awready_out_0);
    mp_m_axi_split_awready->add_mask(0,1,0);
  mp_m_axi_concat_wdata = new xsc::xsc_concatenator<64, 2>("m_axi_concat_wdata");
  mp_m_axi_concat_wdata->in_port[0](m_axi_concat_wdata_out_0);
  mp_m_axi_concat_wdata->out_port(m_axi_wdata);
    mp_m_axi_concat_wdata->offset_port(0, 0);
  mp_m_axi_concat_wstrb = new xsc::xsc_concatenator<8, 2>("m_axi_concat_wstrb");
  mp_m_axi_concat_wstrb->in_port[0](m_axi_concat_wstrb_out_0);
  mp_m_axi_concat_wstrb->out_port(m_axi_wstrb);
    mp_m_axi_concat_wstrb->offset_port(0, 0);
  mp_m_axi_concat_wlast = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wlast");
  mp_m_axi_concat_wlast->in_port[0](m_axi_concat_wlast_out_0);
  mp_m_axi_concat_wlast->out_port(m_axi_wlast);
    mp_m_axi_concat_wlast->offset_port(0, 0);
  mp_m_axi_concat_wvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wvalid");
  mp_m_axi_concat_wvalid->in_port[0](m_axi_concat_wvalid_out_0);
  mp_m_axi_concat_wvalid->out_port(m_axi_wvalid);
    mp_m_axi_concat_wvalid->offset_port(0, 0);
  mp_m_axi_split_wready = new xsc::xsc_split<2, 2>("m_axi_split_wready");
  mp_m_axi_split_wready->in_port(m_axi_wready);
  mp_m_axi_split_wready->out_port[0](m_axi_split_wready_out_0);
    mp_m_axi_split_wready->add_mask(0,1,0);
  mp_m_axi_split_bresp = new xsc::xsc_split<4, 2>("m_axi_split_bresp");
  mp_m_axi_split_bresp->in_port(m_axi_bresp);
  mp_m_axi_split_bresp->out_port[0](m_axi_split_bresp_out_0);
    mp_m_axi_split_bresp->add_mask(0,2,0);
  mp_m_axi_split_bvalid = new xsc::xsc_split<2, 2>("m_axi_split_bvalid");
  mp_m_axi_split_bvalid->in_port(m_axi_bvalid);
  mp_m_axi_split_bvalid->out_port[0](m_axi_split_bvalid_out_0);
    mp_m_axi_split_bvalid->add_mask(0,1,0);
  mp_m_axi_concat_bready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_bready");
  mp_m_axi_concat_bready->in_port[0](m_axi_concat_bready_out_0);
  mp_m_axi_concat_bready->out_port(m_axi_bready);
    mp_m_axi_concat_bready->offset_port(0, 0);
  mp_m_axi_concat_araddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_araddr");
  mp_m_axi_concat_araddr->in_port[0](m_axi_concat_araddr_out_0);
  mp_m_axi_concat_araddr->out_port(m_axi_araddr);
    mp_m_axi_concat_araddr->offset_port(0, 0);
  mp_m_axi_concat_arlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_arlen");
  mp_m_axi_concat_arlen->in_port[0](m_axi_concat_arlen_out_0);
  mp_m_axi_concat_arlen->out_port(m_axi_arlen);
    mp_m_axi_concat_arlen->offset_port(0, 0);
  mp_m_axi_concat_arsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arsize");
  mp_m_axi_concat_arsize->in_port[0](m_axi_concat_arsize_out_0);
  mp_m_axi_concat_arsize->out_port(m_axi_arsize);
    mp_m_axi_concat_arsize->offset_port(0, 0);
  mp_m_axi_concat_arburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_arburst");
  mp_m_axi_concat_arburst->in_port[0](m_axi_concat_arburst_out_0);
  mp_m_axi_concat_arburst->out_port(m_axi_arburst);
    mp_m_axi_concat_arburst->offset_port(0, 0);
  mp_m_axi_concat_arlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arlock");
  mp_m_axi_concat_arlock->in_port[0](m_axi_concat_arlock_out_0);
  mp_m_axi_concat_arlock->out_port(m_axi_arlock);
    mp_m_axi_concat_arlock->offset_port(0, 0);
  mp_m_axi_concat_arcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arcache");
  mp_m_axi_concat_arcache->in_port[0](m_axi_concat_arcache_out_0);
  mp_m_axi_concat_arcache->out_port(m_axi_arcache);
    mp_m_axi_concat_arcache->offset_port(0, 0);
  mp_m_axi_concat_arprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arprot");
  mp_m_axi_concat_arprot->in_port[0](m_axi_concat_arprot_out_0);
  mp_m_axi_concat_arprot->out_port(m_axi_arprot);
    mp_m_axi_concat_arprot->offset_port(0, 0);
  mp_m_axi_concat_arregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arregion");
  mp_m_axi_concat_arregion->in_port[0](m_axi_concat_arregion_out_0);
  mp_m_axi_concat_arregion->out_port(m_axi_arregion);
    mp_m_axi_concat_arregion->offset_port(0, 0);
  mp_m_axi_concat_arqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arqos");
  mp_m_axi_concat_arqos->in_port[0](m_axi_concat_arqos_out_0);
  mp_m_axi_concat_arqos->out_port(m_axi_arqos);
    mp_m_axi_concat_arqos->offset_port(0, 0);
  mp_m_axi_concat_arvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arvalid");
  mp_m_axi_concat_arvalid->in_port[0](m_axi_concat_arvalid_out_0);
  mp_m_axi_concat_arvalid->out_port(m_axi_arvalid);
    mp_m_axi_concat_arvalid->offset_port(0, 0);
  mp_m_axi_split_arready = new xsc::xsc_split<2, 2>("m_axi_split_arready");
  mp_m_axi_split_arready->in_port(m_axi_arready);
  mp_m_axi_split_arready->out_port[0](m_axi_split_arready_out_0);
    mp_m_axi_split_arready->add_mask(0,1,0);
  mp_m_axi_split_rdata = new xsc::xsc_split<64, 2>("m_axi_split_rdata");
  mp_m_axi_split_rdata->in_port(m_axi_rdata);
  mp_m_axi_split_rdata->out_port[0](m_axi_split_rdata_out_0);
    mp_m_axi_split_rdata->add_mask(0,32,0);
  mp_m_axi_split_rresp = new xsc::xsc_split<4, 2>("m_axi_split_rresp");
  mp_m_axi_split_rresp->in_port(m_axi_rresp);
  mp_m_axi_split_rresp->out_port[0](m_axi_split_rresp_out_0);
    mp_m_axi_split_rresp->add_mask(0,2,0);
  mp_m_axi_split_rlast = new xsc::xsc_split<2, 2>("m_axi_split_rlast");
  mp_m_axi_split_rlast->in_port(m_axi_rlast);
  mp_m_axi_split_rlast->out_port[0](m_axi_split_rlast_out_0);
    mp_m_axi_split_rlast->add_mask(0,1,0);
  mp_m_axi_split_rvalid = new xsc::xsc_split<2, 2>("m_axi_split_rvalid");
  mp_m_axi_split_rvalid->in_port(m_axi_rvalid);
  mp_m_axi_split_rvalid->out_port[0](m_axi_split_rvalid_out_0);
    mp_m_axi_split_rvalid->add_mask(0,1,0);
  mp_m_axi_concat_rready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_rready");
  mp_m_axi_concat_rready->in_port[0](m_axi_concat_rready_out_0);
  mp_m_axi_concat_rready->out_port(m_axi_rready);
    mp_m_axi_concat_rready->offset_port(0, 0);
  mp_m_axi_concat_awaddr->in_port[1](m_axi_concat_awaddr_out_1);
  mp_m_axi_concat_awaddr->offset_port(1, 32);
  mp_m_axi_concat_awlen->in_port[1](m_axi_concat_awlen_out_1);
  mp_m_axi_concat_awlen->offset_port(1, 8);
  mp_m_axi_concat_awsize->in_port[1](m_axi_concat_awsize_out_1);
  mp_m_axi_concat_awsize->offset_port(1, 3);
  mp_m_axi_concat_awburst->in_port[1](m_axi_concat_awburst_out_1);
  mp_m_axi_concat_awburst->offset_port(1, 2);
  mp_m_axi_concat_awlock->in_port[1](m_axi_concat_awlock_out_1);
  mp_m_axi_concat_awlock->offset_port(1, 1);
  mp_m_axi_concat_awcache->in_port[1](m_axi_concat_awcache_out_1);
  mp_m_axi_concat_awcache->offset_port(1, 4);
  mp_m_axi_concat_awprot->in_port[1](m_axi_concat_awprot_out_1);
  mp_m_axi_concat_awprot->offset_port(1, 3);
  mp_m_axi_concat_awregion->in_port[1](m_axi_concat_awregion_out_1);
  mp_m_axi_concat_awregion->offset_port(1, 4);
  mp_m_axi_concat_awqos->in_port[1](m_axi_concat_awqos_out_1);
  mp_m_axi_concat_awqos->offset_port(1, 4);
  mp_m_axi_concat_awvalid->in_port[1](m_axi_concat_awvalid_out_1);
  mp_m_axi_concat_awvalid->offset_port(1, 1);
  
  mp_m_axi_split_awready->out_port[1](m_axi_split_awready_out_1);
    mp_m_axi_split_awready->add_mask(1,2,1);
  mp_m_axi_concat_wdata->in_port[1](m_axi_concat_wdata_out_1);
  mp_m_axi_concat_wdata->offset_port(1, 32);
  mp_m_axi_concat_wstrb->in_port[1](m_axi_concat_wstrb_out_1);
  mp_m_axi_concat_wstrb->offset_port(1, 4);
  mp_m_axi_concat_wlast->in_port[1](m_axi_concat_wlast_out_1);
  mp_m_axi_concat_wlast->offset_port(1, 1);
  mp_m_axi_concat_wvalid->in_port[1](m_axi_concat_wvalid_out_1);
  mp_m_axi_concat_wvalid->offset_port(1, 1);
  
  mp_m_axi_split_wready->out_port[1](m_axi_split_wready_out_1);
    mp_m_axi_split_wready->add_mask(1,2,1);
  
  mp_m_axi_split_bresp->out_port[1](m_axi_split_bresp_out_1);
    mp_m_axi_split_bresp->add_mask(1,4,2);
  
  mp_m_axi_split_bvalid->out_port[1](m_axi_split_bvalid_out_1);
    mp_m_axi_split_bvalid->add_mask(1,2,1);
  mp_m_axi_concat_bready->in_port[1](m_axi_concat_bready_out_1);
  mp_m_axi_concat_bready->offset_port(1, 1);
  mp_m_axi_concat_araddr->in_port[1](m_axi_concat_araddr_out_1);
  mp_m_axi_concat_araddr->offset_port(1, 32);
  mp_m_axi_concat_arlen->in_port[1](m_axi_concat_arlen_out_1);
  mp_m_axi_concat_arlen->offset_port(1, 8);
  mp_m_axi_concat_arsize->in_port[1](m_axi_concat_arsize_out_1);
  mp_m_axi_concat_arsize->offset_port(1, 3);
  mp_m_axi_concat_arburst->in_port[1](m_axi_concat_arburst_out_1);
  mp_m_axi_concat_arburst->offset_port(1, 2);
  mp_m_axi_concat_arlock->in_port[1](m_axi_concat_arlock_out_1);
  mp_m_axi_concat_arlock->offset_port(1, 1);
  mp_m_axi_concat_arcache->in_port[1](m_axi_concat_arcache_out_1);
  mp_m_axi_concat_arcache->offset_port(1, 4);
  mp_m_axi_concat_arprot->in_port[1](m_axi_concat_arprot_out_1);
  mp_m_axi_concat_arprot->offset_port(1, 3);
  mp_m_axi_concat_arregion->in_port[1](m_axi_concat_arregion_out_1);
  mp_m_axi_concat_arregion->offset_port(1, 4);
  mp_m_axi_concat_arqos->in_port[1](m_axi_concat_arqos_out_1);
  mp_m_axi_concat_arqos->offset_port(1, 4);
  mp_m_axi_concat_arvalid->in_port[1](m_axi_concat_arvalid_out_1);
  mp_m_axi_concat_arvalid->offset_port(1, 1);
  
  mp_m_axi_split_arready->out_port[1](m_axi_split_arready_out_1);
    mp_m_axi_split_arready->add_mask(1,2,1);
  
  mp_m_axi_split_rdata->out_port[1](m_axi_split_rdata_out_1);
    mp_m_axi_split_rdata->add_mask(1,64,32);
  
  mp_m_axi_split_rresp->out_port[1](m_axi_split_rresp_out_1);
    mp_m_axi_split_rresp->add_mask(1,4,2);
  
  mp_m_axi_split_rlast->out_port[1](m_axi_split_rlast_out_1);
    mp_m_axi_split_rlast->add_mask(1,2,1);
  
  mp_m_axi_split_rvalid->out_port[1](m_axi_split_rvalid_out_1);
    mp_m_axi_split_rvalid->add_mask(1,2,1);
  mp_m_axi_concat_rready->in_port[1](m_axi_concat_rready_out_1);
  mp_m_axi_concat_rready->offset_port(1, 1);

  // initialize socket stubs

}

void zynq_example_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(s_axi_awid);
    mp_S00_AXI_transactor->AWADDR(s_axi_awaddr);
    mp_S00_AXI_transactor->AWLEN(s_axi_awlen);
    mp_S00_AXI_transactor->AWSIZE(s_axi_awsize);
    mp_S00_AXI_transactor->AWBURST(s_axi_awburst);
    mp_s_axi_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awlock_converter");
    mp_s_axi_awlock_converter->vector_in(s_axi_awlock);
    mp_s_axi_awlock_converter->scalar_out(m_s_axi_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_s_axi_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(s_axi_awcache);
    mp_S00_AXI_transactor->AWPROT(s_axi_awprot);
    mp_S00_AXI_transactor->AWQOS(s_axi_awqos);
    mp_s_axi_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awvalid_converter");
    mp_s_axi_awvalid_converter->vector_in(s_axi_awvalid);
    mp_s_axi_awvalid_converter->scalar_out(m_s_axi_awvalid_converter_signal);
    mp_S00_AXI_transactor->AWVALID(m_s_axi_awvalid_converter_signal);
    mp_s_axi_awready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_awready_converter");
    mp_s_axi_awready_converter->scalar_in(m_s_axi_awready_converter_signal);
    mp_s_axi_awready_converter->vector_out(s_axi_awready);
    mp_S00_AXI_transactor->AWREADY(m_s_axi_awready_converter_signal);
    mp_S00_AXI_transactor->WDATA(s_axi_wdata);
    mp_S00_AXI_transactor->WSTRB(s_axi_wstrb);
    mp_s_axi_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wlast_converter");
    mp_s_axi_wlast_converter->vector_in(s_axi_wlast);
    mp_s_axi_wlast_converter->scalar_out(m_s_axi_wlast_converter_signal);
    mp_S00_AXI_transactor->WLAST(m_s_axi_wlast_converter_signal);
    mp_s_axi_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wvalid_converter");
    mp_s_axi_wvalid_converter->vector_in(s_axi_wvalid);
    mp_s_axi_wvalid_converter->scalar_out(m_s_axi_wvalid_converter_signal);
    mp_S00_AXI_transactor->WVALID(m_s_axi_wvalid_converter_signal);
    mp_s_axi_wready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_wready_converter");
    mp_s_axi_wready_converter->scalar_in(m_s_axi_wready_converter_signal);
    mp_s_axi_wready_converter->vector_out(s_axi_wready);
    mp_S00_AXI_transactor->WREADY(m_s_axi_wready_converter_signal);
    mp_S00_AXI_transactor->BID(s_axi_bid);
    mp_S00_AXI_transactor->BRESP(s_axi_bresp);
    mp_s_axi_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_bvalid_converter");
    mp_s_axi_bvalid_converter->scalar_in(m_s_axi_bvalid_converter_signal);
    mp_s_axi_bvalid_converter->vector_out(s_axi_bvalid);
    mp_S00_AXI_transactor->BVALID(m_s_axi_bvalid_converter_signal);
    mp_s_axi_bready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_bready_converter");
    mp_s_axi_bready_converter->vector_in(s_axi_bready);
    mp_s_axi_bready_converter->scalar_out(m_s_axi_bready_converter_signal);
    mp_S00_AXI_transactor->BREADY(m_s_axi_bready_converter_signal);
    mp_S00_AXI_transactor->ARID(s_axi_arid);
    mp_S00_AXI_transactor->ARADDR(s_axi_araddr);
    mp_S00_AXI_transactor->ARLEN(s_axi_arlen);
    mp_S00_AXI_transactor->ARSIZE(s_axi_arsize);
    mp_S00_AXI_transactor->ARBURST(s_axi_arburst);
    mp_s_axi_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arlock_converter");
    mp_s_axi_arlock_converter->vector_in(s_axi_arlock);
    mp_s_axi_arlock_converter->scalar_out(m_s_axi_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_s_axi_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(s_axi_arcache);
    mp_S00_AXI_transactor->ARPROT(s_axi_arprot);
    mp_S00_AXI_transactor->ARQOS(s_axi_arqos);
    mp_s_axi_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arvalid_converter");
    mp_s_axi_arvalid_converter->vector_in(s_axi_arvalid);
    mp_s_axi_arvalid_converter->scalar_out(m_s_axi_arvalid_converter_signal);
    mp_S00_AXI_transactor->ARVALID(m_s_axi_arvalid_converter_signal);
    mp_s_axi_arready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_arready_converter");
    mp_s_axi_arready_converter->scalar_in(m_s_axi_arready_converter_signal);
    mp_s_axi_arready_converter->vector_out(s_axi_arready);
    mp_S00_AXI_transactor->ARREADY(m_s_axi_arready_converter_signal);
    mp_S00_AXI_transactor->RID(s_axi_rid);
    mp_S00_AXI_transactor->RDATA(s_axi_rdata);
    mp_S00_AXI_transactor->RRESP(s_axi_rresp);
    mp_s_axi_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rlast_converter");
    mp_s_axi_rlast_converter->scalar_in(m_s_axi_rlast_converter_signal);
    mp_s_axi_rlast_converter->vector_out(s_axi_rlast);
    mp_S00_AXI_transactor->RLAST(m_s_axi_rlast_converter_signal);
    mp_s_axi_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rvalid_converter");
    mp_s_axi_rvalid_converter->scalar_in(m_s_axi_rvalid_converter_signal);
    mp_s_axi_rvalid_converter->vector_out(s_axi_rvalid);
    mp_S00_AXI_transactor->RVALID(m_s_axi_rvalid_converter_signal);
    mp_s_axi_rready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_rready_converter");
    mp_s_axi_rready_converter->vector_in(s_axi_rready);
    mp_s_axi_rready_converter->scalar_out(m_s_axi_rready_converter_signal);
    mp_S00_AXI_transactor->RREADY(m_s_axi_rready_converter_signal);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->target_0_rd_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->target_0_wr_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_m_axi_awaddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_0");
    mp_m_axi_awaddr_converter_0->vector_in(m_m_axi_awaddr_converter_0_signal);
    mp_m_axi_awaddr_converter_0->vector_out(m_axi_concat_awaddr_out_0);
    mp_M00_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_0_signal);
    mp_m_axi_awlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_0");
    mp_m_axi_awlen_converter_0->vector_in(m_m_axi_awlen_converter_0_signal);
    mp_m_axi_awlen_converter_0->vector_out(m_axi_concat_awlen_out_0);
    mp_M00_AXI_transactor->AWLEN(m_m_axi_awlen_converter_0_signal);
    mp_m_axi_awsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_0");
    mp_m_axi_awsize_converter_0->vector_in(m_m_axi_awsize_converter_0_signal);
    mp_m_axi_awsize_converter_0->vector_out(m_axi_concat_awsize_out_0);
    mp_M00_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_0_signal);
    mp_m_axi_awburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_0");
    mp_m_axi_awburst_converter_0->vector_in(m_m_axi_awburst_converter_0_signal);
    mp_m_axi_awburst_converter_0->vector_out(m_axi_concat_awburst_out_0);
    mp_M00_AXI_transactor->AWBURST(m_m_axi_awburst_converter_0_signal);
    mp_m_axi_awlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_0");
    mp_m_axi_awlock_converter_0->scalar_in(m_m_axi_awlock_converter_0_signal);
    mp_m_axi_awlock_converter_0->vector_out(m_axi_concat_awlock_out_0);
    mp_M00_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_0_signal);
    mp_m_axi_awcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_0");
    mp_m_axi_awcache_converter_0->vector_in(m_m_axi_awcache_converter_0_signal);
    mp_m_axi_awcache_converter_0->vector_out(m_axi_concat_awcache_out_0);
    mp_M00_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_0_signal);
    mp_m_axi_awprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_0");
    mp_m_axi_awprot_converter_0->vector_in(m_m_axi_awprot_converter_0_signal);
    mp_m_axi_awprot_converter_0->vector_out(m_axi_concat_awprot_out_0);
    mp_M00_AXI_transactor->AWPROT(m_m_axi_awprot_converter_0_signal);
    mp_m_axi_awregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_0");
    mp_m_axi_awregion_converter_0->vector_in(m_m_axi_awregion_converter_0_signal);
    mp_m_axi_awregion_converter_0->vector_out(m_axi_concat_awregion_out_0);
    mp_M00_AXI_transactor->AWREGION(m_m_axi_awregion_converter_0_signal);
    mp_m_axi_awqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_0");
    mp_m_axi_awqos_converter_0->vector_in(m_m_axi_awqos_converter_0_signal);
    mp_m_axi_awqos_converter_0->vector_out(m_axi_concat_awqos_out_0);
    mp_M00_AXI_transactor->AWQOS(m_m_axi_awqos_converter_0_signal);
    mp_m_axi_awvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_0");
    mp_m_axi_awvalid_converter_0->scalar_in(m_m_axi_awvalid_converter_0_signal);
    mp_m_axi_awvalid_converter_0->vector_out(m_axi_concat_awvalid_out_0);
    mp_M00_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_0_signal);
    mp_m_axi_awready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_0");
    mp_m_axi_awready_converter_0->vector_in(m_axi_split_awready_out_0);
    mp_m_axi_awready_converter_0->scalar_out(m_m_axi_awready_converter_0_signal);
    mp_M00_AXI_transactor->AWREADY(m_m_axi_awready_converter_0_signal);
    mp_m_axi_wdata_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_0");
    mp_m_axi_wdata_converter_0->vector_in(m_m_axi_wdata_converter_0_signal);
    mp_m_axi_wdata_converter_0->vector_out(m_axi_concat_wdata_out_0);
    mp_M00_AXI_transactor->WDATA(m_m_axi_wdata_converter_0_signal);
    mp_m_axi_wstrb_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_0");
    mp_m_axi_wstrb_converter_0->vector_in(m_m_axi_wstrb_converter_0_signal);
    mp_m_axi_wstrb_converter_0->vector_out(m_axi_concat_wstrb_out_0);
    mp_M00_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_0_signal);
    mp_m_axi_wlast_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_0");
    mp_m_axi_wlast_converter_0->scalar_in(m_m_axi_wlast_converter_0_signal);
    mp_m_axi_wlast_converter_0->vector_out(m_axi_concat_wlast_out_0);
    mp_M00_AXI_transactor->WLAST(m_m_axi_wlast_converter_0_signal);
    mp_m_axi_wvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_0");
    mp_m_axi_wvalid_converter_0->scalar_in(m_m_axi_wvalid_converter_0_signal);
    mp_m_axi_wvalid_converter_0->vector_out(m_axi_concat_wvalid_out_0);
    mp_M00_AXI_transactor->WVALID(m_m_axi_wvalid_converter_0_signal);
    mp_m_axi_wready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_0");
    mp_m_axi_wready_converter_0->vector_in(m_axi_split_wready_out_0);
    mp_m_axi_wready_converter_0->scalar_out(m_m_axi_wready_converter_0_signal);
    mp_M00_AXI_transactor->WREADY(m_m_axi_wready_converter_0_signal);
    mp_m_axi_bresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_0");
    mp_m_axi_bresp_converter_0->vector_in(m_axi_split_bresp_out_0);
    mp_m_axi_bresp_converter_0->vector_out(m_m_axi_bresp_converter_0_signal);
    mp_M00_AXI_transactor->BRESP(m_m_axi_bresp_converter_0_signal);
    mp_m_axi_bvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_0");
    mp_m_axi_bvalid_converter_0->vector_in(m_axi_split_bvalid_out_0);
    mp_m_axi_bvalid_converter_0->scalar_out(m_m_axi_bvalid_converter_0_signal);
    mp_M00_AXI_transactor->BVALID(m_m_axi_bvalid_converter_0_signal);
    mp_m_axi_bready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_0");
    mp_m_axi_bready_converter_0->scalar_in(m_m_axi_bready_converter_0_signal);
    mp_m_axi_bready_converter_0->vector_out(m_axi_concat_bready_out_0);
    mp_M00_AXI_transactor->BREADY(m_m_axi_bready_converter_0_signal);
    mp_m_axi_araddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_0");
    mp_m_axi_araddr_converter_0->vector_in(m_m_axi_araddr_converter_0_signal);
    mp_m_axi_araddr_converter_0->vector_out(m_axi_concat_araddr_out_0);
    mp_M00_AXI_transactor->ARADDR(m_m_axi_araddr_converter_0_signal);
    mp_m_axi_arlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_0");
    mp_m_axi_arlen_converter_0->vector_in(m_m_axi_arlen_converter_0_signal);
    mp_m_axi_arlen_converter_0->vector_out(m_axi_concat_arlen_out_0);
    mp_M00_AXI_transactor->ARLEN(m_m_axi_arlen_converter_0_signal);
    mp_m_axi_arsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_0");
    mp_m_axi_arsize_converter_0->vector_in(m_m_axi_arsize_converter_0_signal);
    mp_m_axi_arsize_converter_0->vector_out(m_axi_concat_arsize_out_0);
    mp_M00_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_0_signal);
    mp_m_axi_arburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_0");
    mp_m_axi_arburst_converter_0->vector_in(m_m_axi_arburst_converter_0_signal);
    mp_m_axi_arburst_converter_0->vector_out(m_axi_concat_arburst_out_0);
    mp_M00_AXI_transactor->ARBURST(m_m_axi_arburst_converter_0_signal);
    mp_m_axi_arlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_0");
    mp_m_axi_arlock_converter_0->scalar_in(m_m_axi_arlock_converter_0_signal);
    mp_m_axi_arlock_converter_0->vector_out(m_axi_concat_arlock_out_0);
    mp_M00_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_0_signal);
    mp_m_axi_arcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_0");
    mp_m_axi_arcache_converter_0->vector_in(m_m_axi_arcache_converter_0_signal);
    mp_m_axi_arcache_converter_0->vector_out(m_axi_concat_arcache_out_0);
    mp_M00_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_0_signal);
    mp_m_axi_arprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_0");
    mp_m_axi_arprot_converter_0->vector_in(m_m_axi_arprot_converter_0_signal);
    mp_m_axi_arprot_converter_0->vector_out(m_axi_concat_arprot_out_0);
    mp_M00_AXI_transactor->ARPROT(m_m_axi_arprot_converter_0_signal);
    mp_m_axi_arregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_0");
    mp_m_axi_arregion_converter_0->vector_in(m_m_axi_arregion_converter_0_signal);
    mp_m_axi_arregion_converter_0->vector_out(m_axi_concat_arregion_out_0);
    mp_M00_AXI_transactor->ARREGION(m_m_axi_arregion_converter_0_signal);
    mp_m_axi_arqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_0");
    mp_m_axi_arqos_converter_0->vector_in(m_m_axi_arqos_converter_0_signal);
    mp_m_axi_arqos_converter_0->vector_out(m_axi_concat_arqos_out_0);
    mp_M00_AXI_transactor->ARQOS(m_m_axi_arqos_converter_0_signal);
    mp_m_axi_arvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_0");
    mp_m_axi_arvalid_converter_0->scalar_in(m_m_axi_arvalid_converter_0_signal);
    mp_m_axi_arvalid_converter_0->vector_out(m_axi_concat_arvalid_out_0);
    mp_M00_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_0_signal);
    mp_m_axi_arready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_0");
    mp_m_axi_arready_converter_0->vector_in(m_axi_split_arready_out_0);
    mp_m_axi_arready_converter_0->scalar_out(m_m_axi_arready_converter_0_signal);
    mp_M00_AXI_transactor->ARREADY(m_m_axi_arready_converter_0_signal);
    mp_m_axi_rdata_converter_0 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_0");
    mp_m_axi_rdata_converter_0->vector_in(m_axi_split_rdata_out_0);
    mp_m_axi_rdata_converter_0->vector_out(m_m_axi_rdata_converter_0_signal);
    mp_M00_AXI_transactor->RDATA(m_m_axi_rdata_converter_0_signal);
    mp_m_axi_rresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_0");
    mp_m_axi_rresp_converter_0->vector_in(m_axi_split_rresp_out_0);
    mp_m_axi_rresp_converter_0->vector_out(m_m_axi_rresp_converter_0_signal);
    mp_M00_AXI_transactor->RRESP(m_m_axi_rresp_converter_0_signal);
    mp_m_axi_rlast_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_0");
    mp_m_axi_rlast_converter_0->vector_in(m_axi_split_rlast_out_0);
    mp_m_axi_rlast_converter_0->scalar_out(m_m_axi_rlast_converter_0_signal);
    mp_M00_AXI_transactor->RLAST(m_m_axi_rlast_converter_0_signal);
    mp_m_axi_rvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_0");
    mp_m_axi_rvalid_converter_0->vector_in(m_axi_split_rvalid_out_0);
    mp_m_axi_rvalid_converter_0->scalar_out(m_m_axi_rvalid_converter_0_signal);
    mp_M00_AXI_transactor->RVALID(m_m_axi_rvalid_converter_0_signal);
    mp_m_axi_rready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_0");
    mp_m_axi_rready_converter_0->scalar_in(m_m_axi_rready_converter_0_signal);
    mp_m_axi_rready_converter_0->vector_out(m_axi_concat_rready_out_0);
    mp_M00_AXI_transactor->RREADY(m_m_axi_rready_converter_0_signal);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->initiator_0_rd_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->initiator_0_wr_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_m_axi_awaddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_1");
    mp_m_axi_awaddr_converter_1->vector_in(m_m_axi_awaddr_converter_1_signal);
    mp_m_axi_awaddr_converter_1->vector_out(m_axi_concat_awaddr_out_1);
    mp_M01_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_1_signal);
    mp_m_axi_awlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_1");
    mp_m_axi_awlen_converter_1->vector_in(m_m_axi_awlen_converter_1_signal);
    mp_m_axi_awlen_converter_1->vector_out(m_axi_concat_awlen_out_1);
    mp_M01_AXI_transactor->AWLEN(m_m_axi_awlen_converter_1_signal);
    mp_m_axi_awsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_1");
    mp_m_axi_awsize_converter_1->vector_in(m_m_axi_awsize_converter_1_signal);
    mp_m_axi_awsize_converter_1->vector_out(m_axi_concat_awsize_out_1);
    mp_M01_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_1_signal);
    mp_m_axi_awburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_1");
    mp_m_axi_awburst_converter_1->vector_in(m_m_axi_awburst_converter_1_signal);
    mp_m_axi_awburst_converter_1->vector_out(m_axi_concat_awburst_out_1);
    mp_M01_AXI_transactor->AWBURST(m_m_axi_awburst_converter_1_signal);
    mp_m_axi_awlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_1");
    mp_m_axi_awlock_converter_1->scalar_in(m_m_axi_awlock_converter_1_signal);
    mp_m_axi_awlock_converter_1->vector_out(m_axi_concat_awlock_out_1);
    mp_M01_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_1_signal);
    mp_m_axi_awcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_1");
    mp_m_axi_awcache_converter_1->vector_in(m_m_axi_awcache_converter_1_signal);
    mp_m_axi_awcache_converter_1->vector_out(m_axi_concat_awcache_out_1);
    mp_M01_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_1_signal);
    mp_m_axi_awprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_1");
    mp_m_axi_awprot_converter_1->vector_in(m_m_axi_awprot_converter_1_signal);
    mp_m_axi_awprot_converter_1->vector_out(m_axi_concat_awprot_out_1);
    mp_M01_AXI_transactor->AWPROT(m_m_axi_awprot_converter_1_signal);
    mp_m_axi_awregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_1");
    mp_m_axi_awregion_converter_1->vector_in(m_m_axi_awregion_converter_1_signal);
    mp_m_axi_awregion_converter_1->vector_out(m_axi_concat_awregion_out_1);
    mp_M01_AXI_transactor->AWREGION(m_m_axi_awregion_converter_1_signal);
    mp_m_axi_awqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_1");
    mp_m_axi_awqos_converter_1->vector_in(m_m_axi_awqos_converter_1_signal);
    mp_m_axi_awqos_converter_1->vector_out(m_axi_concat_awqos_out_1);
    mp_M01_AXI_transactor->AWQOS(m_m_axi_awqos_converter_1_signal);
    mp_m_axi_awvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_1");
    mp_m_axi_awvalid_converter_1->scalar_in(m_m_axi_awvalid_converter_1_signal);
    mp_m_axi_awvalid_converter_1->vector_out(m_axi_concat_awvalid_out_1);
    mp_M01_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_1_signal);
    mp_m_axi_awready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_1");
    mp_m_axi_awready_converter_1->vector_in(m_axi_split_awready_out_1);
    mp_m_axi_awready_converter_1->scalar_out(m_m_axi_awready_converter_1_signal);
    mp_M01_AXI_transactor->AWREADY(m_m_axi_awready_converter_1_signal);
    mp_m_axi_wdata_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_1");
    mp_m_axi_wdata_converter_1->vector_in(m_m_axi_wdata_converter_1_signal);
    mp_m_axi_wdata_converter_1->vector_out(m_axi_concat_wdata_out_1);
    mp_M01_AXI_transactor->WDATA(m_m_axi_wdata_converter_1_signal);
    mp_m_axi_wstrb_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_1");
    mp_m_axi_wstrb_converter_1->vector_in(m_m_axi_wstrb_converter_1_signal);
    mp_m_axi_wstrb_converter_1->vector_out(m_axi_concat_wstrb_out_1);
    mp_M01_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_1_signal);
    mp_m_axi_wlast_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_1");
    mp_m_axi_wlast_converter_1->scalar_in(m_m_axi_wlast_converter_1_signal);
    mp_m_axi_wlast_converter_1->vector_out(m_axi_concat_wlast_out_1);
    mp_M01_AXI_transactor->WLAST(m_m_axi_wlast_converter_1_signal);
    mp_m_axi_wvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_1");
    mp_m_axi_wvalid_converter_1->scalar_in(m_m_axi_wvalid_converter_1_signal);
    mp_m_axi_wvalid_converter_1->vector_out(m_axi_concat_wvalid_out_1);
    mp_M01_AXI_transactor->WVALID(m_m_axi_wvalid_converter_1_signal);
    mp_m_axi_wready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_1");
    mp_m_axi_wready_converter_1->vector_in(m_axi_split_wready_out_1);
    mp_m_axi_wready_converter_1->scalar_out(m_m_axi_wready_converter_1_signal);
    mp_M01_AXI_transactor->WREADY(m_m_axi_wready_converter_1_signal);
    mp_m_axi_bresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_1");
    mp_m_axi_bresp_converter_1->vector_in(m_axi_split_bresp_out_1);
    mp_m_axi_bresp_converter_1->vector_out(m_m_axi_bresp_converter_1_signal);
    mp_M01_AXI_transactor->BRESP(m_m_axi_bresp_converter_1_signal);
    mp_m_axi_bvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_1");
    mp_m_axi_bvalid_converter_1->vector_in(m_axi_split_bvalid_out_1);
    mp_m_axi_bvalid_converter_1->scalar_out(m_m_axi_bvalid_converter_1_signal);
    mp_M01_AXI_transactor->BVALID(m_m_axi_bvalid_converter_1_signal);
    mp_m_axi_bready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_1");
    mp_m_axi_bready_converter_1->scalar_in(m_m_axi_bready_converter_1_signal);
    mp_m_axi_bready_converter_1->vector_out(m_axi_concat_bready_out_1);
    mp_M01_AXI_transactor->BREADY(m_m_axi_bready_converter_1_signal);
    mp_m_axi_araddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_1");
    mp_m_axi_araddr_converter_1->vector_in(m_m_axi_araddr_converter_1_signal);
    mp_m_axi_araddr_converter_1->vector_out(m_axi_concat_araddr_out_1);
    mp_M01_AXI_transactor->ARADDR(m_m_axi_araddr_converter_1_signal);
    mp_m_axi_arlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_1");
    mp_m_axi_arlen_converter_1->vector_in(m_m_axi_arlen_converter_1_signal);
    mp_m_axi_arlen_converter_1->vector_out(m_axi_concat_arlen_out_1);
    mp_M01_AXI_transactor->ARLEN(m_m_axi_arlen_converter_1_signal);
    mp_m_axi_arsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_1");
    mp_m_axi_arsize_converter_1->vector_in(m_m_axi_arsize_converter_1_signal);
    mp_m_axi_arsize_converter_1->vector_out(m_axi_concat_arsize_out_1);
    mp_M01_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_1_signal);
    mp_m_axi_arburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_1");
    mp_m_axi_arburst_converter_1->vector_in(m_m_axi_arburst_converter_1_signal);
    mp_m_axi_arburst_converter_1->vector_out(m_axi_concat_arburst_out_1);
    mp_M01_AXI_transactor->ARBURST(m_m_axi_arburst_converter_1_signal);
    mp_m_axi_arlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_1");
    mp_m_axi_arlock_converter_1->scalar_in(m_m_axi_arlock_converter_1_signal);
    mp_m_axi_arlock_converter_1->vector_out(m_axi_concat_arlock_out_1);
    mp_M01_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_1_signal);
    mp_m_axi_arcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_1");
    mp_m_axi_arcache_converter_1->vector_in(m_m_axi_arcache_converter_1_signal);
    mp_m_axi_arcache_converter_1->vector_out(m_axi_concat_arcache_out_1);
    mp_M01_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_1_signal);
    mp_m_axi_arprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_1");
    mp_m_axi_arprot_converter_1->vector_in(m_m_axi_arprot_converter_1_signal);
    mp_m_axi_arprot_converter_1->vector_out(m_axi_concat_arprot_out_1);
    mp_M01_AXI_transactor->ARPROT(m_m_axi_arprot_converter_1_signal);
    mp_m_axi_arregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_1");
    mp_m_axi_arregion_converter_1->vector_in(m_m_axi_arregion_converter_1_signal);
    mp_m_axi_arregion_converter_1->vector_out(m_axi_concat_arregion_out_1);
    mp_M01_AXI_transactor->ARREGION(m_m_axi_arregion_converter_1_signal);
    mp_m_axi_arqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_1");
    mp_m_axi_arqos_converter_1->vector_in(m_m_axi_arqos_converter_1_signal);
    mp_m_axi_arqos_converter_1->vector_out(m_axi_concat_arqos_out_1);
    mp_M01_AXI_transactor->ARQOS(m_m_axi_arqos_converter_1_signal);
    mp_m_axi_arvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_1");
    mp_m_axi_arvalid_converter_1->scalar_in(m_m_axi_arvalid_converter_1_signal);
    mp_m_axi_arvalid_converter_1->vector_out(m_axi_concat_arvalid_out_1);
    mp_M01_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_1_signal);
    mp_m_axi_arready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_1");
    mp_m_axi_arready_converter_1->vector_in(m_axi_split_arready_out_1);
    mp_m_axi_arready_converter_1->scalar_out(m_m_axi_arready_converter_1_signal);
    mp_M01_AXI_transactor->ARREADY(m_m_axi_arready_converter_1_signal);
    mp_m_axi_rdata_converter_1 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_1");
    mp_m_axi_rdata_converter_1->vector_in(m_axi_split_rdata_out_1);
    mp_m_axi_rdata_converter_1->vector_out(m_m_axi_rdata_converter_1_signal);
    mp_M01_AXI_transactor->RDATA(m_m_axi_rdata_converter_1_signal);
    mp_m_axi_rresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_1");
    mp_m_axi_rresp_converter_1->vector_in(m_axi_split_rresp_out_1);
    mp_m_axi_rresp_converter_1->vector_out(m_m_axi_rresp_converter_1_signal);
    mp_M01_AXI_transactor->RRESP(m_m_axi_rresp_converter_1_signal);
    mp_m_axi_rlast_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_1");
    mp_m_axi_rlast_converter_1->vector_in(m_axi_split_rlast_out_1);
    mp_m_axi_rlast_converter_1->scalar_out(m_m_axi_rlast_converter_1_signal);
    mp_M01_AXI_transactor->RLAST(m_m_axi_rlast_converter_1_signal);
    mp_m_axi_rvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_1");
    mp_m_axi_rvalid_converter_1->vector_in(m_axi_split_rvalid_out_1);
    mp_m_axi_rvalid_converter_1->scalar_out(m_m_axi_rvalid_converter_1_signal);
    mp_M01_AXI_transactor->RVALID(m_m_axi_rvalid_converter_1_signal);
    mp_m_axi_rready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_1");
    mp_m_axi_rready_converter_1->scalar_in(m_m_axi_rready_converter_1_signal);
    mp_m_axi_rready_converter_1->vector_out(m_axi_concat_rready_out_1);
    mp_M01_AXI_transactor->RREADY(m_m_axi_rready_converter_1_signal);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->initiator_1_rd_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->initiator_1_wr_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
zynq_example_xbar_0::zynq_example_xbar_0(const sc_core::sc_module_name& nm) : zynq_example_xbar_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), s_axi_awid("s_axi_awid"), s_axi_awaddr("s_axi_awaddr"), s_axi_awlen("s_axi_awlen"), s_axi_awsize("s_axi_awsize"), s_axi_awburst("s_axi_awburst"), s_axi_awlock("s_axi_awlock"), s_axi_awcache("s_axi_awcache"), s_axi_awprot("s_axi_awprot"), s_axi_awqos("s_axi_awqos"), s_axi_awvalid("s_axi_awvalid"), s_axi_awready("s_axi_awready"), s_axi_wdata("s_axi_wdata"), s_axi_wstrb("s_axi_wstrb"), s_axi_wlast("s_axi_wlast"), s_axi_wvalid("s_axi_wvalid"), s_axi_wready("s_axi_wready"), s_axi_bid("s_axi_bid"), s_axi_bresp("s_axi_bresp"), s_axi_bvalid("s_axi_bvalid"), s_axi_bready("s_axi_bready"), s_axi_arid("s_axi_arid"), s_axi_araddr("s_axi_araddr"), s_axi_arlen("s_axi_arlen"), s_axi_arsize("s_axi_arsize"), s_axi_arburst("s_axi_arburst"), s_axi_arlock("s_axi_arlock"), s_axi_arcache("s_axi_arcache"), s_axi_arprot("s_axi_arprot"), s_axi_arqos("s_axi_arqos"), s_axi_arvalid("s_axi_arvalid"), s_axi_arready("s_axi_arready"), s_axi_rid("s_axi_rid"), s_axi_rdata("s_axi_rdata"), s_axi_rresp("s_axi_rresp"), s_axi_rlast("s_axi_rlast"), s_axi_rvalid("s_axi_rvalid"), s_axi_rready("s_axi_rready"), m_axi_awaddr("m_axi_awaddr"), m_axi_awlen("m_axi_awlen"), m_axi_awsize("m_axi_awsize"), m_axi_awburst("m_axi_awburst"), m_axi_awlock("m_axi_awlock"), m_axi_awcache("m_axi_awcache"), m_axi_awprot("m_axi_awprot"), m_axi_awregion("m_axi_awregion"), m_axi_awqos("m_axi_awqos"), m_axi_awvalid("m_axi_awvalid"), m_axi_awready("m_axi_awready"), m_axi_wdata("m_axi_wdata"), m_axi_wstrb("m_axi_wstrb"), m_axi_wlast("m_axi_wlast"), m_axi_wvalid("m_axi_wvalid"), m_axi_wready("m_axi_wready"), m_axi_bresp("m_axi_bresp"), m_axi_bvalid("m_axi_bvalid"), m_axi_bready("m_axi_bready"), m_axi_araddr("m_axi_araddr"), m_axi_arlen("m_axi_arlen"), m_axi_arsize("m_axi_arsize"), m_axi_arburst("m_axi_arburst"), m_axi_arlock("m_axi_arlock"), m_axi_arcache("m_axi_arcache"), m_axi_arprot("m_axi_arprot"), m_axi_arregion("m_axi_arregion"), m_axi_arqos("m_axi_arqos"), m_axi_arvalid("m_axi_arvalid"), m_axi_arready("m_axi_arready"), m_axi_rdata("m_axi_rdata"), m_axi_rresp("m_axi_rresp"), m_axi_rlast("m_axi_rlast"), m_axi_rvalid("m_axi_rvalid"), m_axi_rready("m_axi_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_s_axi_awlock_converter = NULL;
  mp_s_axi_awvalid_converter = NULL;
  mp_s_axi_awready_converter = NULL;
  mp_s_axi_wlast_converter = NULL;
  mp_s_axi_wvalid_converter = NULL;
  mp_s_axi_wready_converter = NULL;
  mp_s_axi_bvalid_converter = NULL;
  mp_s_axi_bready_converter = NULL;
  mp_s_axi_arlock_converter = NULL;
  mp_s_axi_arvalid_converter = NULL;
  mp_s_axi_arready_converter = NULL;
  mp_s_axi_rlast_converter = NULL;
  mp_s_axi_rvalid_converter = NULL;
  mp_s_axi_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_0 = NULL;
  mp_m_axi_awlen_converter_0 = NULL;
  mp_m_axi_awsize_converter_0 = NULL;
  mp_m_axi_awburst_converter_0 = NULL;
  mp_m_axi_awlock_converter_0 = NULL;
  mp_m_axi_awcache_converter_0 = NULL;
  mp_m_axi_awprot_converter_0 = NULL;
  mp_m_axi_awregion_converter_0 = NULL;
  mp_m_axi_awqos_converter_0 = NULL;
  mp_m_axi_awvalid_converter_0 = NULL;
  mp_m_axi_awready_converter_0 = NULL;
  mp_m_axi_wdata_converter_0 = NULL;
  mp_m_axi_wstrb_converter_0 = NULL;
  mp_m_axi_wlast_converter_0 = NULL;
  mp_m_axi_wvalid_converter_0 = NULL;
  mp_m_axi_wready_converter_0 = NULL;
  mp_m_axi_bresp_converter_0 = NULL;
  mp_m_axi_bvalid_converter_0 = NULL;
  mp_m_axi_bready_converter_0 = NULL;
  mp_m_axi_araddr_converter_0 = NULL;
  mp_m_axi_arlen_converter_0 = NULL;
  mp_m_axi_arsize_converter_0 = NULL;
  mp_m_axi_arburst_converter_0 = NULL;
  mp_m_axi_arlock_converter_0 = NULL;
  mp_m_axi_arcache_converter_0 = NULL;
  mp_m_axi_arprot_converter_0 = NULL;
  mp_m_axi_arregion_converter_0 = NULL;
  mp_m_axi_arqos_converter_0 = NULL;
  mp_m_axi_arvalid_converter_0 = NULL;
  mp_m_axi_arready_converter_0 = NULL;
  mp_m_axi_rdata_converter_0 = NULL;
  mp_m_axi_rresp_converter_0 = NULL;
  mp_m_axi_rlast_converter_0 = NULL;
  mp_m_axi_rvalid_converter_0 = NULL;
  mp_m_axi_rready_converter_0 = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_1 = NULL;
  mp_m_axi_awlen_converter_1 = NULL;
  mp_m_axi_awsize_converter_1 = NULL;
  mp_m_axi_awburst_converter_1 = NULL;
  mp_m_axi_awlock_converter_1 = NULL;
  mp_m_axi_awcache_converter_1 = NULL;
  mp_m_axi_awprot_converter_1 = NULL;
  mp_m_axi_awregion_converter_1 = NULL;
  mp_m_axi_awqos_converter_1 = NULL;
  mp_m_axi_awvalid_converter_1 = NULL;
  mp_m_axi_awready_converter_1 = NULL;
  mp_m_axi_wdata_converter_1 = NULL;
  mp_m_axi_wstrb_converter_1 = NULL;
  mp_m_axi_wlast_converter_1 = NULL;
  mp_m_axi_wvalid_converter_1 = NULL;
  mp_m_axi_wready_converter_1 = NULL;
  mp_m_axi_bresp_converter_1 = NULL;
  mp_m_axi_bvalid_converter_1 = NULL;
  mp_m_axi_bready_converter_1 = NULL;
  mp_m_axi_araddr_converter_1 = NULL;
  mp_m_axi_arlen_converter_1 = NULL;
  mp_m_axi_arsize_converter_1 = NULL;
  mp_m_axi_arburst_converter_1 = NULL;
  mp_m_axi_arlock_converter_1 = NULL;
  mp_m_axi_arcache_converter_1 = NULL;
  mp_m_axi_arprot_converter_1 = NULL;
  mp_m_axi_arregion_converter_1 = NULL;
  mp_m_axi_arqos_converter_1 = NULL;
  mp_m_axi_arvalid_converter_1 = NULL;
  mp_m_axi_arready_converter_1 = NULL;
  mp_m_axi_rdata_converter_1 = NULL;
  mp_m_axi_rresp_converter_1 = NULL;
  mp_m_axi_rlast_converter_1 = NULL;
  mp_m_axi_rvalid_converter_1 = NULL;
  mp_m_axi_rready_converter_1 = NULL;

  // initialize port junctures
  mp_m_axi_concat_araddr = NULL;
  mp_m_axi_concat_arburst = NULL;
  mp_m_axi_concat_arcache = NULL;
  mp_m_axi_concat_arlen = NULL;
  mp_m_axi_concat_arlock = NULL;
  mp_m_axi_concat_arprot = NULL;
  mp_m_axi_concat_arqos = NULL;
  mp_m_axi_concat_arregion = NULL;
  mp_m_axi_concat_arsize = NULL;
  mp_m_axi_concat_arvalid = NULL;
  mp_m_axi_concat_awaddr = NULL;
  mp_m_axi_concat_awburst = NULL;
  mp_m_axi_concat_awcache = NULL;
  mp_m_axi_concat_awlen = NULL;
  mp_m_axi_concat_awlock = NULL;
  mp_m_axi_concat_awprot = NULL;
  mp_m_axi_concat_awqos = NULL;
  mp_m_axi_concat_awregion = NULL;
  mp_m_axi_concat_awsize = NULL;
  mp_m_axi_concat_awvalid = NULL;
  mp_m_axi_concat_bready = NULL;
  mp_m_axi_concat_rready = NULL;
  mp_m_axi_concat_wdata = NULL;
  mp_m_axi_concat_wlast = NULL;
  mp_m_axi_concat_wstrb = NULL;
  mp_m_axi_concat_wvalid = NULL;
  mp_m_axi_split_arready = NULL;
  mp_m_axi_split_awready = NULL;
  mp_m_axi_split_bresp = NULL;
  mp_m_axi_split_bvalid = NULL;
  mp_m_axi_split_rdata = NULL;
  mp_m_axi_split_rlast = NULL;
  mp_m_axi_split_rresp = NULL;
  mp_m_axi_split_rvalid = NULL;
  mp_m_axi_split_wready = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWID(s_axi_awid);
  mp_S00_AXI_transactor->AWADDR(s_axi_awaddr);
  mp_S00_AXI_transactor->AWLEN(s_axi_awlen);
  mp_S00_AXI_transactor->AWSIZE(s_axi_awsize);
  mp_S00_AXI_transactor->AWBURST(s_axi_awburst);
  mp_s_axi_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awlock_converter");
  mp_s_axi_awlock_converter->vector_in(s_axi_awlock);
  mp_s_axi_awlock_converter->scalar_out(m_s_axi_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_s_axi_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(s_axi_awcache);
  mp_S00_AXI_transactor->AWPROT(s_axi_awprot);
  mp_S00_AXI_transactor->AWQOS(s_axi_awqos);
  mp_s_axi_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awvalid_converter");
  mp_s_axi_awvalid_converter->vector_in(s_axi_awvalid);
  mp_s_axi_awvalid_converter->scalar_out(m_s_axi_awvalid_converter_signal);
  mp_S00_AXI_transactor->AWVALID(m_s_axi_awvalid_converter_signal);
  mp_s_axi_awready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_awready_converter");
  mp_s_axi_awready_converter->scalar_in(m_s_axi_awready_converter_signal);
  mp_s_axi_awready_converter->vector_out(s_axi_awready);
  mp_S00_AXI_transactor->AWREADY(m_s_axi_awready_converter_signal);
  mp_S00_AXI_transactor->WDATA(s_axi_wdata);
  mp_S00_AXI_transactor->WSTRB(s_axi_wstrb);
  mp_s_axi_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wlast_converter");
  mp_s_axi_wlast_converter->vector_in(s_axi_wlast);
  mp_s_axi_wlast_converter->scalar_out(m_s_axi_wlast_converter_signal);
  mp_S00_AXI_transactor->WLAST(m_s_axi_wlast_converter_signal);
  mp_s_axi_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wvalid_converter");
  mp_s_axi_wvalid_converter->vector_in(s_axi_wvalid);
  mp_s_axi_wvalid_converter->scalar_out(m_s_axi_wvalid_converter_signal);
  mp_S00_AXI_transactor->WVALID(m_s_axi_wvalid_converter_signal);
  mp_s_axi_wready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_wready_converter");
  mp_s_axi_wready_converter->scalar_in(m_s_axi_wready_converter_signal);
  mp_s_axi_wready_converter->vector_out(s_axi_wready);
  mp_S00_AXI_transactor->WREADY(m_s_axi_wready_converter_signal);
  mp_S00_AXI_transactor->BID(s_axi_bid);
  mp_S00_AXI_transactor->BRESP(s_axi_bresp);
  mp_s_axi_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_bvalid_converter");
  mp_s_axi_bvalid_converter->scalar_in(m_s_axi_bvalid_converter_signal);
  mp_s_axi_bvalid_converter->vector_out(s_axi_bvalid);
  mp_S00_AXI_transactor->BVALID(m_s_axi_bvalid_converter_signal);
  mp_s_axi_bready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_bready_converter");
  mp_s_axi_bready_converter->vector_in(s_axi_bready);
  mp_s_axi_bready_converter->scalar_out(m_s_axi_bready_converter_signal);
  mp_S00_AXI_transactor->BREADY(m_s_axi_bready_converter_signal);
  mp_S00_AXI_transactor->ARID(s_axi_arid);
  mp_S00_AXI_transactor->ARADDR(s_axi_araddr);
  mp_S00_AXI_transactor->ARLEN(s_axi_arlen);
  mp_S00_AXI_transactor->ARSIZE(s_axi_arsize);
  mp_S00_AXI_transactor->ARBURST(s_axi_arburst);
  mp_s_axi_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arlock_converter");
  mp_s_axi_arlock_converter->vector_in(s_axi_arlock);
  mp_s_axi_arlock_converter->scalar_out(m_s_axi_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_s_axi_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(s_axi_arcache);
  mp_S00_AXI_transactor->ARPROT(s_axi_arprot);
  mp_S00_AXI_transactor->ARQOS(s_axi_arqos);
  mp_s_axi_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arvalid_converter");
  mp_s_axi_arvalid_converter->vector_in(s_axi_arvalid);
  mp_s_axi_arvalid_converter->scalar_out(m_s_axi_arvalid_converter_signal);
  mp_S00_AXI_transactor->ARVALID(m_s_axi_arvalid_converter_signal);
  mp_s_axi_arready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_arready_converter");
  mp_s_axi_arready_converter->scalar_in(m_s_axi_arready_converter_signal);
  mp_s_axi_arready_converter->vector_out(s_axi_arready);
  mp_S00_AXI_transactor->ARREADY(m_s_axi_arready_converter_signal);
  mp_S00_AXI_transactor->RID(s_axi_rid);
  mp_S00_AXI_transactor->RDATA(s_axi_rdata);
  mp_S00_AXI_transactor->RRESP(s_axi_rresp);
  mp_s_axi_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rlast_converter");
  mp_s_axi_rlast_converter->scalar_in(m_s_axi_rlast_converter_signal);
  mp_s_axi_rlast_converter->vector_out(s_axi_rlast);
  mp_S00_AXI_transactor->RLAST(m_s_axi_rlast_converter_signal);
  mp_s_axi_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rvalid_converter");
  mp_s_axi_rvalid_converter->scalar_in(m_s_axi_rvalid_converter_signal);
  mp_s_axi_rvalid_converter->vector_out(s_axi_rvalid);
  mp_S00_AXI_transactor->RVALID(m_s_axi_rvalid_converter_signal);
  mp_s_axi_rready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_rready_converter");
  mp_s_axi_rready_converter->vector_in(s_axi_rready);
  mp_s_axi_rready_converter->scalar_out(m_s_axi_rready_converter_signal);
  mp_S00_AXI_transactor->RREADY(m_s_axi_rready_converter_signal);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_m_axi_awaddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_0");
  mp_m_axi_concat_awaddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_awaddr");
  mp_m_axi_concat_awaddr->in_port[0](m_axi_concat_awaddr_out_0);
  mp_m_axi_concat_awaddr->out_port(m_axi_awaddr);
    mp_m_axi_concat_awaddr->offset_port(0, 0);
  mp_m_axi_awaddr_converter_0->vector_in(m_m_axi_awaddr_converter_0_signal);
  mp_m_axi_awaddr_converter_0->vector_out(m_axi_concat_awaddr_out_0);
  mp_M00_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_0_signal);
  mp_m_axi_awlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_0");
  mp_m_axi_concat_awlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_awlen");
  mp_m_axi_concat_awlen->in_port[0](m_axi_concat_awlen_out_0);
  mp_m_axi_concat_awlen->out_port(m_axi_awlen);
    mp_m_axi_concat_awlen->offset_port(0, 0);
  mp_m_axi_awlen_converter_0->vector_in(m_m_axi_awlen_converter_0_signal);
  mp_m_axi_awlen_converter_0->vector_out(m_axi_concat_awlen_out_0);
  mp_M00_AXI_transactor->AWLEN(m_m_axi_awlen_converter_0_signal);
  mp_m_axi_awsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_0");
  mp_m_axi_concat_awsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awsize");
  mp_m_axi_concat_awsize->in_port[0](m_axi_concat_awsize_out_0);
  mp_m_axi_concat_awsize->out_port(m_axi_awsize);
    mp_m_axi_concat_awsize->offset_port(0, 0);
  mp_m_axi_awsize_converter_0->vector_in(m_m_axi_awsize_converter_0_signal);
  mp_m_axi_awsize_converter_0->vector_out(m_axi_concat_awsize_out_0);
  mp_M00_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_0_signal);
  mp_m_axi_awburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_0");
  mp_m_axi_concat_awburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_awburst");
  mp_m_axi_concat_awburst->in_port[0](m_axi_concat_awburst_out_0);
  mp_m_axi_concat_awburst->out_port(m_axi_awburst);
    mp_m_axi_concat_awburst->offset_port(0, 0);
  mp_m_axi_awburst_converter_0->vector_in(m_m_axi_awburst_converter_0_signal);
  mp_m_axi_awburst_converter_0->vector_out(m_axi_concat_awburst_out_0);
  mp_M00_AXI_transactor->AWBURST(m_m_axi_awburst_converter_0_signal);
  mp_m_axi_awlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_0");
  mp_m_axi_concat_awlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awlock");
  mp_m_axi_concat_awlock->in_port[0](m_axi_concat_awlock_out_0);
  mp_m_axi_concat_awlock->out_port(m_axi_awlock);
    mp_m_axi_concat_awlock->offset_port(0, 0);
  mp_m_axi_awlock_converter_0->scalar_in(m_m_axi_awlock_converter_0_signal);
  mp_m_axi_awlock_converter_0->vector_out(m_axi_concat_awlock_out_0);
  mp_M00_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_0_signal);
  mp_m_axi_awcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_0");
  mp_m_axi_concat_awcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awcache");
  mp_m_axi_concat_awcache->in_port[0](m_axi_concat_awcache_out_0);
  mp_m_axi_concat_awcache->out_port(m_axi_awcache);
    mp_m_axi_concat_awcache->offset_port(0, 0);
  mp_m_axi_awcache_converter_0->vector_in(m_m_axi_awcache_converter_0_signal);
  mp_m_axi_awcache_converter_0->vector_out(m_axi_concat_awcache_out_0);
  mp_M00_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_0_signal);
  mp_m_axi_awprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_0");
  mp_m_axi_concat_awprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awprot");
  mp_m_axi_concat_awprot->in_port[0](m_axi_concat_awprot_out_0);
  mp_m_axi_concat_awprot->out_port(m_axi_awprot);
    mp_m_axi_concat_awprot->offset_port(0, 0);
  mp_m_axi_awprot_converter_0->vector_in(m_m_axi_awprot_converter_0_signal);
  mp_m_axi_awprot_converter_0->vector_out(m_axi_concat_awprot_out_0);
  mp_M00_AXI_transactor->AWPROT(m_m_axi_awprot_converter_0_signal);
  mp_m_axi_awregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_0");
  mp_m_axi_concat_awregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awregion");
  mp_m_axi_concat_awregion->in_port[0](m_axi_concat_awregion_out_0);
  mp_m_axi_concat_awregion->out_port(m_axi_awregion);
    mp_m_axi_concat_awregion->offset_port(0, 0);
  mp_m_axi_awregion_converter_0->vector_in(m_m_axi_awregion_converter_0_signal);
  mp_m_axi_awregion_converter_0->vector_out(m_axi_concat_awregion_out_0);
  mp_M00_AXI_transactor->AWREGION(m_m_axi_awregion_converter_0_signal);
  mp_m_axi_awqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_0");
  mp_m_axi_concat_awqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awqos");
  mp_m_axi_concat_awqos->in_port[0](m_axi_concat_awqos_out_0);
  mp_m_axi_concat_awqos->out_port(m_axi_awqos);
    mp_m_axi_concat_awqos->offset_port(0, 0);
  mp_m_axi_awqos_converter_0->vector_in(m_m_axi_awqos_converter_0_signal);
  mp_m_axi_awqos_converter_0->vector_out(m_axi_concat_awqos_out_0);
  mp_M00_AXI_transactor->AWQOS(m_m_axi_awqos_converter_0_signal);
  mp_m_axi_awvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_0");
  mp_m_axi_concat_awvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awvalid");
  mp_m_axi_concat_awvalid->in_port[0](m_axi_concat_awvalid_out_0);
  mp_m_axi_concat_awvalid->out_port(m_axi_awvalid);
    mp_m_axi_concat_awvalid->offset_port(0, 0);
  mp_m_axi_awvalid_converter_0->scalar_in(m_m_axi_awvalid_converter_0_signal);
  mp_m_axi_awvalid_converter_0->vector_out(m_axi_concat_awvalid_out_0);
  mp_M00_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_0_signal);
  mp_m_axi_awready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_0");
  mp_m_axi_split_awready = new xsc::xsc_split<2, 2>("m_axi_split_awready");
  mp_m_axi_split_awready->in_port(m_axi_awready);
  mp_m_axi_split_awready->out_port[0](m_axi_split_awready_out_0);
    mp_m_axi_split_awready->add_mask(0,1,0);
  mp_m_axi_awready_converter_0->vector_in(m_axi_split_awready_out_0);
  mp_m_axi_awready_converter_0->scalar_out(m_m_axi_awready_converter_0_signal);
  mp_M00_AXI_transactor->AWREADY(m_m_axi_awready_converter_0_signal);
  mp_m_axi_wdata_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_0");
  mp_m_axi_concat_wdata = new xsc::xsc_concatenator<64, 2>("m_axi_concat_wdata");
  mp_m_axi_concat_wdata->in_port[0](m_axi_concat_wdata_out_0);
  mp_m_axi_concat_wdata->out_port(m_axi_wdata);
    mp_m_axi_concat_wdata->offset_port(0, 0);
  mp_m_axi_wdata_converter_0->vector_in(m_m_axi_wdata_converter_0_signal);
  mp_m_axi_wdata_converter_0->vector_out(m_axi_concat_wdata_out_0);
  mp_M00_AXI_transactor->WDATA(m_m_axi_wdata_converter_0_signal);
  mp_m_axi_wstrb_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_0");
  mp_m_axi_concat_wstrb = new xsc::xsc_concatenator<8, 2>("m_axi_concat_wstrb");
  mp_m_axi_concat_wstrb->in_port[0](m_axi_concat_wstrb_out_0);
  mp_m_axi_concat_wstrb->out_port(m_axi_wstrb);
    mp_m_axi_concat_wstrb->offset_port(0, 0);
  mp_m_axi_wstrb_converter_0->vector_in(m_m_axi_wstrb_converter_0_signal);
  mp_m_axi_wstrb_converter_0->vector_out(m_axi_concat_wstrb_out_0);
  mp_M00_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_0_signal);
  mp_m_axi_wlast_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_0");
  mp_m_axi_concat_wlast = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wlast");
  mp_m_axi_concat_wlast->in_port[0](m_axi_concat_wlast_out_0);
  mp_m_axi_concat_wlast->out_port(m_axi_wlast);
    mp_m_axi_concat_wlast->offset_port(0, 0);
  mp_m_axi_wlast_converter_0->scalar_in(m_m_axi_wlast_converter_0_signal);
  mp_m_axi_wlast_converter_0->vector_out(m_axi_concat_wlast_out_0);
  mp_M00_AXI_transactor->WLAST(m_m_axi_wlast_converter_0_signal);
  mp_m_axi_wvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_0");
  mp_m_axi_concat_wvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wvalid");
  mp_m_axi_concat_wvalid->in_port[0](m_axi_concat_wvalid_out_0);
  mp_m_axi_concat_wvalid->out_port(m_axi_wvalid);
    mp_m_axi_concat_wvalid->offset_port(0, 0);
  mp_m_axi_wvalid_converter_0->scalar_in(m_m_axi_wvalid_converter_0_signal);
  mp_m_axi_wvalid_converter_0->vector_out(m_axi_concat_wvalid_out_0);
  mp_M00_AXI_transactor->WVALID(m_m_axi_wvalid_converter_0_signal);
  mp_m_axi_wready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_0");
  mp_m_axi_split_wready = new xsc::xsc_split<2, 2>("m_axi_split_wready");
  mp_m_axi_split_wready->in_port(m_axi_wready);
  mp_m_axi_split_wready->out_port[0](m_axi_split_wready_out_0);
    mp_m_axi_split_wready->add_mask(0,1,0);
  mp_m_axi_wready_converter_0->vector_in(m_axi_split_wready_out_0);
  mp_m_axi_wready_converter_0->scalar_out(m_m_axi_wready_converter_0_signal);
  mp_M00_AXI_transactor->WREADY(m_m_axi_wready_converter_0_signal);
  mp_m_axi_bresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_0");
  mp_m_axi_split_bresp = new xsc::xsc_split<4, 2>("m_axi_split_bresp");
  mp_m_axi_split_bresp->in_port(m_axi_bresp);
  mp_m_axi_split_bresp->out_port[0](m_axi_split_bresp_out_0);
    mp_m_axi_split_bresp->add_mask(0,2,0);
  mp_m_axi_bresp_converter_0->vector_in(m_axi_split_bresp_out_0);
  mp_m_axi_bresp_converter_0->vector_out(m_m_axi_bresp_converter_0_signal);
  mp_M00_AXI_transactor->BRESP(m_m_axi_bresp_converter_0_signal);
  mp_m_axi_bvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_0");
  mp_m_axi_split_bvalid = new xsc::xsc_split<2, 2>("m_axi_split_bvalid");
  mp_m_axi_split_bvalid->in_port(m_axi_bvalid);
  mp_m_axi_split_bvalid->out_port[0](m_axi_split_bvalid_out_0);
    mp_m_axi_split_bvalid->add_mask(0,1,0);
  mp_m_axi_bvalid_converter_0->vector_in(m_axi_split_bvalid_out_0);
  mp_m_axi_bvalid_converter_0->scalar_out(m_m_axi_bvalid_converter_0_signal);
  mp_M00_AXI_transactor->BVALID(m_m_axi_bvalid_converter_0_signal);
  mp_m_axi_bready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_0");
  mp_m_axi_concat_bready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_bready");
  mp_m_axi_concat_bready->in_port[0](m_axi_concat_bready_out_0);
  mp_m_axi_concat_bready->out_port(m_axi_bready);
    mp_m_axi_concat_bready->offset_port(0, 0);
  mp_m_axi_bready_converter_0->scalar_in(m_m_axi_bready_converter_0_signal);
  mp_m_axi_bready_converter_0->vector_out(m_axi_concat_bready_out_0);
  mp_M00_AXI_transactor->BREADY(m_m_axi_bready_converter_0_signal);
  mp_m_axi_araddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_0");
  mp_m_axi_concat_araddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_araddr");
  mp_m_axi_concat_araddr->in_port[0](m_axi_concat_araddr_out_0);
  mp_m_axi_concat_araddr->out_port(m_axi_araddr);
    mp_m_axi_concat_araddr->offset_port(0, 0);
  mp_m_axi_araddr_converter_0->vector_in(m_m_axi_araddr_converter_0_signal);
  mp_m_axi_araddr_converter_0->vector_out(m_axi_concat_araddr_out_0);
  mp_M00_AXI_transactor->ARADDR(m_m_axi_araddr_converter_0_signal);
  mp_m_axi_arlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_0");
  mp_m_axi_concat_arlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_arlen");
  mp_m_axi_concat_arlen->in_port[0](m_axi_concat_arlen_out_0);
  mp_m_axi_concat_arlen->out_port(m_axi_arlen);
    mp_m_axi_concat_arlen->offset_port(0, 0);
  mp_m_axi_arlen_converter_0->vector_in(m_m_axi_arlen_converter_0_signal);
  mp_m_axi_arlen_converter_0->vector_out(m_axi_concat_arlen_out_0);
  mp_M00_AXI_transactor->ARLEN(m_m_axi_arlen_converter_0_signal);
  mp_m_axi_arsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_0");
  mp_m_axi_concat_arsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arsize");
  mp_m_axi_concat_arsize->in_port[0](m_axi_concat_arsize_out_0);
  mp_m_axi_concat_arsize->out_port(m_axi_arsize);
    mp_m_axi_concat_arsize->offset_port(0, 0);
  mp_m_axi_arsize_converter_0->vector_in(m_m_axi_arsize_converter_0_signal);
  mp_m_axi_arsize_converter_0->vector_out(m_axi_concat_arsize_out_0);
  mp_M00_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_0_signal);
  mp_m_axi_arburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_0");
  mp_m_axi_concat_arburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_arburst");
  mp_m_axi_concat_arburst->in_port[0](m_axi_concat_arburst_out_0);
  mp_m_axi_concat_arburst->out_port(m_axi_arburst);
    mp_m_axi_concat_arburst->offset_port(0, 0);
  mp_m_axi_arburst_converter_0->vector_in(m_m_axi_arburst_converter_0_signal);
  mp_m_axi_arburst_converter_0->vector_out(m_axi_concat_arburst_out_0);
  mp_M00_AXI_transactor->ARBURST(m_m_axi_arburst_converter_0_signal);
  mp_m_axi_arlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_0");
  mp_m_axi_concat_arlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arlock");
  mp_m_axi_concat_arlock->in_port[0](m_axi_concat_arlock_out_0);
  mp_m_axi_concat_arlock->out_port(m_axi_arlock);
    mp_m_axi_concat_arlock->offset_port(0, 0);
  mp_m_axi_arlock_converter_0->scalar_in(m_m_axi_arlock_converter_0_signal);
  mp_m_axi_arlock_converter_0->vector_out(m_axi_concat_arlock_out_0);
  mp_M00_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_0_signal);
  mp_m_axi_arcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_0");
  mp_m_axi_concat_arcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arcache");
  mp_m_axi_concat_arcache->in_port[0](m_axi_concat_arcache_out_0);
  mp_m_axi_concat_arcache->out_port(m_axi_arcache);
    mp_m_axi_concat_arcache->offset_port(0, 0);
  mp_m_axi_arcache_converter_0->vector_in(m_m_axi_arcache_converter_0_signal);
  mp_m_axi_arcache_converter_0->vector_out(m_axi_concat_arcache_out_0);
  mp_M00_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_0_signal);
  mp_m_axi_arprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_0");
  mp_m_axi_concat_arprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arprot");
  mp_m_axi_concat_arprot->in_port[0](m_axi_concat_arprot_out_0);
  mp_m_axi_concat_arprot->out_port(m_axi_arprot);
    mp_m_axi_concat_arprot->offset_port(0, 0);
  mp_m_axi_arprot_converter_0->vector_in(m_m_axi_arprot_converter_0_signal);
  mp_m_axi_arprot_converter_0->vector_out(m_axi_concat_arprot_out_0);
  mp_M00_AXI_transactor->ARPROT(m_m_axi_arprot_converter_0_signal);
  mp_m_axi_arregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_0");
  mp_m_axi_concat_arregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arregion");
  mp_m_axi_concat_arregion->in_port[0](m_axi_concat_arregion_out_0);
  mp_m_axi_concat_arregion->out_port(m_axi_arregion);
    mp_m_axi_concat_arregion->offset_port(0, 0);
  mp_m_axi_arregion_converter_0->vector_in(m_m_axi_arregion_converter_0_signal);
  mp_m_axi_arregion_converter_0->vector_out(m_axi_concat_arregion_out_0);
  mp_M00_AXI_transactor->ARREGION(m_m_axi_arregion_converter_0_signal);
  mp_m_axi_arqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_0");
  mp_m_axi_concat_arqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arqos");
  mp_m_axi_concat_arqos->in_port[0](m_axi_concat_arqos_out_0);
  mp_m_axi_concat_arqos->out_port(m_axi_arqos);
    mp_m_axi_concat_arqos->offset_port(0, 0);
  mp_m_axi_arqos_converter_0->vector_in(m_m_axi_arqos_converter_0_signal);
  mp_m_axi_arqos_converter_0->vector_out(m_axi_concat_arqos_out_0);
  mp_M00_AXI_transactor->ARQOS(m_m_axi_arqos_converter_0_signal);
  mp_m_axi_arvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_0");
  mp_m_axi_concat_arvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arvalid");
  mp_m_axi_concat_arvalid->in_port[0](m_axi_concat_arvalid_out_0);
  mp_m_axi_concat_arvalid->out_port(m_axi_arvalid);
    mp_m_axi_concat_arvalid->offset_port(0, 0);
  mp_m_axi_arvalid_converter_0->scalar_in(m_m_axi_arvalid_converter_0_signal);
  mp_m_axi_arvalid_converter_0->vector_out(m_axi_concat_arvalid_out_0);
  mp_M00_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_0_signal);
  mp_m_axi_arready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_0");
  mp_m_axi_split_arready = new xsc::xsc_split<2, 2>("m_axi_split_arready");
  mp_m_axi_split_arready->in_port(m_axi_arready);
  mp_m_axi_split_arready->out_port[0](m_axi_split_arready_out_0);
    mp_m_axi_split_arready->add_mask(0,1,0);
  mp_m_axi_arready_converter_0->vector_in(m_axi_split_arready_out_0);
  mp_m_axi_arready_converter_0->scalar_out(m_m_axi_arready_converter_0_signal);
  mp_M00_AXI_transactor->ARREADY(m_m_axi_arready_converter_0_signal);
  mp_m_axi_rdata_converter_0 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_0");
  mp_m_axi_split_rdata = new xsc::xsc_split<64, 2>("m_axi_split_rdata");
  mp_m_axi_split_rdata->in_port(m_axi_rdata);
  mp_m_axi_split_rdata->out_port[0](m_axi_split_rdata_out_0);
    mp_m_axi_split_rdata->add_mask(0,32,0);
  mp_m_axi_rdata_converter_0->vector_in(m_axi_split_rdata_out_0);
  mp_m_axi_rdata_converter_0->vector_out(m_m_axi_rdata_converter_0_signal);
  mp_M00_AXI_transactor->RDATA(m_m_axi_rdata_converter_0_signal);
  mp_m_axi_rresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_0");
  mp_m_axi_split_rresp = new xsc::xsc_split<4, 2>("m_axi_split_rresp");
  mp_m_axi_split_rresp->in_port(m_axi_rresp);
  mp_m_axi_split_rresp->out_port[0](m_axi_split_rresp_out_0);
    mp_m_axi_split_rresp->add_mask(0,2,0);
  mp_m_axi_rresp_converter_0->vector_in(m_axi_split_rresp_out_0);
  mp_m_axi_rresp_converter_0->vector_out(m_m_axi_rresp_converter_0_signal);
  mp_M00_AXI_transactor->RRESP(m_m_axi_rresp_converter_0_signal);
  mp_m_axi_rlast_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_0");
  mp_m_axi_split_rlast = new xsc::xsc_split<2, 2>("m_axi_split_rlast");
  mp_m_axi_split_rlast->in_port(m_axi_rlast);
  mp_m_axi_split_rlast->out_port[0](m_axi_split_rlast_out_0);
    mp_m_axi_split_rlast->add_mask(0,1,0);
  mp_m_axi_rlast_converter_0->vector_in(m_axi_split_rlast_out_0);
  mp_m_axi_rlast_converter_0->scalar_out(m_m_axi_rlast_converter_0_signal);
  mp_M00_AXI_transactor->RLAST(m_m_axi_rlast_converter_0_signal);
  mp_m_axi_rvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_0");
  mp_m_axi_split_rvalid = new xsc::xsc_split<2, 2>("m_axi_split_rvalid");
  mp_m_axi_split_rvalid->in_port(m_axi_rvalid);
  mp_m_axi_split_rvalid->out_port[0](m_axi_split_rvalid_out_0);
    mp_m_axi_split_rvalid->add_mask(0,1,0);
  mp_m_axi_rvalid_converter_0->vector_in(m_axi_split_rvalid_out_0);
  mp_m_axi_rvalid_converter_0->scalar_out(m_m_axi_rvalid_converter_0_signal);
  mp_M00_AXI_transactor->RVALID(m_m_axi_rvalid_converter_0_signal);
  mp_m_axi_rready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_0");
  mp_m_axi_concat_rready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_rready");
  mp_m_axi_concat_rready->in_port[0](m_axi_concat_rready_out_0);
  mp_m_axi_concat_rready->out_port(m_axi_rready);
    mp_m_axi_concat_rready->offset_port(0, 0);
  mp_m_axi_rready_converter_0->scalar_in(m_m_axi_rready_converter_0_signal);
  mp_m_axi_rready_converter_0->vector_out(m_axi_concat_rready_out_0);
  mp_M00_AXI_transactor->RREADY(m_m_axi_rready_converter_0_signal);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);
  // configure M01_AXI_transactor
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);
  mp_m_axi_awaddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_1");
  mp_m_axi_concat_awaddr->in_port[1](m_axi_concat_awaddr_out_1);
  mp_m_axi_concat_awaddr->offset_port(1, 32);
  mp_m_axi_awaddr_converter_1->vector_in(m_m_axi_awaddr_converter_1_signal);
  mp_m_axi_awaddr_converter_1->vector_out(m_axi_concat_awaddr_out_1);
  mp_M01_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_1_signal);
  mp_m_axi_awlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_1");
  mp_m_axi_concat_awlen->in_port[1](m_axi_concat_awlen_out_1);
  mp_m_axi_concat_awlen->offset_port(1, 8);
  mp_m_axi_awlen_converter_1->vector_in(m_m_axi_awlen_converter_1_signal);
  mp_m_axi_awlen_converter_1->vector_out(m_axi_concat_awlen_out_1);
  mp_M01_AXI_transactor->AWLEN(m_m_axi_awlen_converter_1_signal);
  mp_m_axi_awsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_1");
  mp_m_axi_concat_awsize->in_port[1](m_axi_concat_awsize_out_1);
  mp_m_axi_concat_awsize->offset_port(1, 3);
  mp_m_axi_awsize_converter_1->vector_in(m_m_axi_awsize_converter_1_signal);
  mp_m_axi_awsize_converter_1->vector_out(m_axi_concat_awsize_out_1);
  mp_M01_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_1_signal);
  mp_m_axi_awburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_1");
  mp_m_axi_concat_awburst->in_port[1](m_axi_concat_awburst_out_1);
  mp_m_axi_concat_awburst->offset_port(1, 2);
  mp_m_axi_awburst_converter_1->vector_in(m_m_axi_awburst_converter_1_signal);
  mp_m_axi_awburst_converter_1->vector_out(m_axi_concat_awburst_out_1);
  mp_M01_AXI_transactor->AWBURST(m_m_axi_awburst_converter_1_signal);
  mp_m_axi_awlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_1");
  mp_m_axi_concat_awlock->in_port[1](m_axi_concat_awlock_out_1);
  mp_m_axi_concat_awlock->offset_port(1, 1);
  mp_m_axi_awlock_converter_1->scalar_in(m_m_axi_awlock_converter_1_signal);
  mp_m_axi_awlock_converter_1->vector_out(m_axi_concat_awlock_out_1);
  mp_M01_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_1_signal);
  mp_m_axi_awcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_1");
  mp_m_axi_concat_awcache->in_port[1](m_axi_concat_awcache_out_1);
  mp_m_axi_concat_awcache->offset_port(1, 4);
  mp_m_axi_awcache_converter_1->vector_in(m_m_axi_awcache_converter_1_signal);
  mp_m_axi_awcache_converter_1->vector_out(m_axi_concat_awcache_out_1);
  mp_M01_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_1_signal);
  mp_m_axi_awprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_1");
  mp_m_axi_concat_awprot->in_port[1](m_axi_concat_awprot_out_1);
  mp_m_axi_concat_awprot->offset_port(1, 3);
  mp_m_axi_awprot_converter_1->vector_in(m_m_axi_awprot_converter_1_signal);
  mp_m_axi_awprot_converter_1->vector_out(m_axi_concat_awprot_out_1);
  mp_M01_AXI_transactor->AWPROT(m_m_axi_awprot_converter_1_signal);
  mp_m_axi_awregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_1");
  mp_m_axi_concat_awregion->in_port[1](m_axi_concat_awregion_out_1);
  mp_m_axi_concat_awregion->offset_port(1, 4);
  mp_m_axi_awregion_converter_1->vector_in(m_m_axi_awregion_converter_1_signal);
  mp_m_axi_awregion_converter_1->vector_out(m_axi_concat_awregion_out_1);
  mp_M01_AXI_transactor->AWREGION(m_m_axi_awregion_converter_1_signal);
  mp_m_axi_awqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_1");
  mp_m_axi_concat_awqos->in_port[1](m_axi_concat_awqos_out_1);
  mp_m_axi_concat_awqos->offset_port(1, 4);
  mp_m_axi_awqos_converter_1->vector_in(m_m_axi_awqos_converter_1_signal);
  mp_m_axi_awqos_converter_1->vector_out(m_axi_concat_awqos_out_1);
  mp_M01_AXI_transactor->AWQOS(m_m_axi_awqos_converter_1_signal);
  mp_m_axi_awvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_1");
  mp_m_axi_concat_awvalid->in_port[1](m_axi_concat_awvalid_out_1);
  mp_m_axi_concat_awvalid->offset_port(1, 1);
  mp_m_axi_awvalid_converter_1->scalar_in(m_m_axi_awvalid_converter_1_signal);
  mp_m_axi_awvalid_converter_1->vector_out(m_axi_concat_awvalid_out_1);
  mp_M01_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_1_signal);
  mp_m_axi_awready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_1");
  
  mp_m_axi_split_awready->out_port[1](m_axi_split_awready_out_1);
    mp_m_axi_split_awready->add_mask(1,2,1);
  mp_m_axi_awready_converter_1->vector_in(m_axi_split_awready_out_1);
  mp_m_axi_awready_converter_1->scalar_out(m_m_axi_awready_converter_1_signal);
  mp_M01_AXI_transactor->AWREADY(m_m_axi_awready_converter_1_signal);
  mp_m_axi_wdata_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_1");
  mp_m_axi_concat_wdata->in_port[1](m_axi_concat_wdata_out_1);
  mp_m_axi_concat_wdata->offset_port(1, 32);
  mp_m_axi_wdata_converter_1->vector_in(m_m_axi_wdata_converter_1_signal);
  mp_m_axi_wdata_converter_1->vector_out(m_axi_concat_wdata_out_1);
  mp_M01_AXI_transactor->WDATA(m_m_axi_wdata_converter_1_signal);
  mp_m_axi_wstrb_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_1");
  mp_m_axi_concat_wstrb->in_port[1](m_axi_concat_wstrb_out_1);
  mp_m_axi_concat_wstrb->offset_port(1, 4);
  mp_m_axi_wstrb_converter_1->vector_in(m_m_axi_wstrb_converter_1_signal);
  mp_m_axi_wstrb_converter_1->vector_out(m_axi_concat_wstrb_out_1);
  mp_M01_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_1_signal);
  mp_m_axi_wlast_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_1");
  mp_m_axi_concat_wlast->in_port[1](m_axi_concat_wlast_out_1);
  mp_m_axi_concat_wlast->offset_port(1, 1);
  mp_m_axi_wlast_converter_1->scalar_in(m_m_axi_wlast_converter_1_signal);
  mp_m_axi_wlast_converter_1->vector_out(m_axi_concat_wlast_out_1);
  mp_M01_AXI_transactor->WLAST(m_m_axi_wlast_converter_1_signal);
  mp_m_axi_wvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_1");
  mp_m_axi_concat_wvalid->in_port[1](m_axi_concat_wvalid_out_1);
  mp_m_axi_concat_wvalid->offset_port(1, 1);
  mp_m_axi_wvalid_converter_1->scalar_in(m_m_axi_wvalid_converter_1_signal);
  mp_m_axi_wvalid_converter_1->vector_out(m_axi_concat_wvalid_out_1);
  mp_M01_AXI_transactor->WVALID(m_m_axi_wvalid_converter_1_signal);
  mp_m_axi_wready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_1");
  
  mp_m_axi_split_wready->out_port[1](m_axi_split_wready_out_1);
    mp_m_axi_split_wready->add_mask(1,2,1);
  mp_m_axi_wready_converter_1->vector_in(m_axi_split_wready_out_1);
  mp_m_axi_wready_converter_1->scalar_out(m_m_axi_wready_converter_1_signal);
  mp_M01_AXI_transactor->WREADY(m_m_axi_wready_converter_1_signal);
  mp_m_axi_bresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_1");
  
  mp_m_axi_split_bresp->out_port[1](m_axi_split_bresp_out_1);
    mp_m_axi_split_bresp->add_mask(1,4,2);
  mp_m_axi_bresp_converter_1->vector_in(m_axi_split_bresp_out_1);
  mp_m_axi_bresp_converter_1->vector_out(m_m_axi_bresp_converter_1_signal);
  mp_M01_AXI_transactor->BRESP(m_m_axi_bresp_converter_1_signal);
  mp_m_axi_bvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_1");
  
  mp_m_axi_split_bvalid->out_port[1](m_axi_split_bvalid_out_1);
    mp_m_axi_split_bvalid->add_mask(1,2,1);
  mp_m_axi_bvalid_converter_1->vector_in(m_axi_split_bvalid_out_1);
  mp_m_axi_bvalid_converter_1->scalar_out(m_m_axi_bvalid_converter_1_signal);
  mp_M01_AXI_transactor->BVALID(m_m_axi_bvalid_converter_1_signal);
  mp_m_axi_bready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_1");
  mp_m_axi_concat_bready->in_port[1](m_axi_concat_bready_out_1);
  mp_m_axi_concat_bready->offset_port(1, 1);
  mp_m_axi_bready_converter_1->scalar_in(m_m_axi_bready_converter_1_signal);
  mp_m_axi_bready_converter_1->vector_out(m_axi_concat_bready_out_1);
  mp_M01_AXI_transactor->BREADY(m_m_axi_bready_converter_1_signal);
  mp_m_axi_araddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_1");
  mp_m_axi_concat_araddr->in_port[1](m_axi_concat_araddr_out_1);
  mp_m_axi_concat_araddr->offset_port(1, 32);
  mp_m_axi_araddr_converter_1->vector_in(m_m_axi_araddr_converter_1_signal);
  mp_m_axi_araddr_converter_1->vector_out(m_axi_concat_araddr_out_1);
  mp_M01_AXI_transactor->ARADDR(m_m_axi_araddr_converter_1_signal);
  mp_m_axi_arlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_1");
  mp_m_axi_concat_arlen->in_port[1](m_axi_concat_arlen_out_1);
  mp_m_axi_concat_arlen->offset_port(1, 8);
  mp_m_axi_arlen_converter_1->vector_in(m_m_axi_arlen_converter_1_signal);
  mp_m_axi_arlen_converter_1->vector_out(m_axi_concat_arlen_out_1);
  mp_M01_AXI_transactor->ARLEN(m_m_axi_arlen_converter_1_signal);
  mp_m_axi_arsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_1");
  mp_m_axi_concat_arsize->in_port[1](m_axi_concat_arsize_out_1);
  mp_m_axi_concat_arsize->offset_port(1, 3);
  mp_m_axi_arsize_converter_1->vector_in(m_m_axi_arsize_converter_1_signal);
  mp_m_axi_arsize_converter_1->vector_out(m_axi_concat_arsize_out_1);
  mp_M01_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_1_signal);
  mp_m_axi_arburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_1");
  mp_m_axi_concat_arburst->in_port[1](m_axi_concat_arburst_out_1);
  mp_m_axi_concat_arburst->offset_port(1, 2);
  mp_m_axi_arburst_converter_1->vector_in(m_m_axi_arburst_converter_1_signal);
  mp_m_axi_arburst_converter_1->vector_out(m_axi_concat_arburst_out_1);
  mp_M01_AXI_transactor->ARBURST(m_m_axi_arburst_converter_1_signal);
  mp_m_axi_arlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_1");
  mp_m_axi_concat_arlock->in_port[1](m_axi_concat_arlock_out_1);
  mp_m_axi_concat_arlock->offset_port(1, 1);
  mp_m_axi_arlock_converter_1->scalar_in(m_m_axi_arlock_converter_1_signal);
  mp_m_axi_arlock_converter_1->vector_out(m_axi_concat_arlock_out_1);
  mp_M01_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_1_signal);
  mp_m_axi_arcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_1");
  mp_m_axi_concat_arcache->in_port[1](m_axi_concat_arcache_out_1);
  mp_m_axi_concat_arcache->offset_port(1, 4);
  mp_m_axi_arcache_converter_1->vector_in(m_m_axi_arcache_converter_1_signal);
  mp_m_axi_arcache_converter_1->vector_out(m_axi_concat_arcache_out_1);
  mp_M01_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_1_signal);
  mp_m_axi_arprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_1");
  mp_m_axi_concat_arprot->in_port[1](m_axi_concat_arprot_out_1);
  mp_m_axi_concat_arprot->offset_port(1, 3);
  mp_m_axi_arprot_converter_1->vector_in(m_m_axi_arprot_converter_1_signal);
  mp_m_axi_arprot_converter_1->vector_out(m_axi_concat_arprot_out_1);
  mp_M01_AXI_transactor->ARPROT(m_m_axi_arprot_converter_1_signal);
  mp_m_axi_arregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_1");
  mp_m_axi_concat_arregion->in_port[1](m_axi_concat_arregion_out_1);
  mp_m_axi_concat_arregion->offset_port(1, 4);
  mp_m_axi_arregion_converter_1->vector_in(m_m_axi_arregion_converter_1_signal);
  mp_m_axi_arregion_converter_1->vector_out(m_axi_concat_arregion_out_1);
  mp_M01_AXI_transactor->ARREGION(m_m_axi_arregion_converter_1_signal);
  mp_m_axi_arqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_1");
  mp_m_axi_concat_arqos->in_port[1](m_axi_concat_arqos_out_1);
  mp_m_axi_concat_arqos->offset_port(1, 4);
  mp_m_axi_arqos_converter_1->vector_in(m_m_axi_arqos_converter_1_signal);
  mp_m_axi_arqos_converter_1->vector_out(m_axi_concat_arqos_out_1);
  mp_M01_AXI_transactor->ARQOS(m_m_axi_arqos_converter_1_signal);
  mp_m_axi_arvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_1");
  mp_m_axi_concat_arvalid->in_port[1](m_axi_concat_arvalid_out_1);
  mp_m_axi_concat_arvalid->offset_port(1, 1);
  mp_m_axi_arvalid_converter_1->scalar_in(m_m_axi_arvalid_converter_1_signal);
  mp_m_axi_arvalid_converter_1->vector_out(m_axi_concat_arvalid_out_1);
  mp_M01_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_1_signal);
  mp_m_axi_arready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_1");
  
  mp_m_axi_split_arready->out_port[1](m_axi_split_arready_out_1);
    mp_m_axi_split_arready->add_mask(1,2,1);
  mp_m_axi_arready_converter_1->vector_in(m_axi_split_arready_out_1);
  mp_m_axi_arready_converter_1->scalar_out(m_m_axi_arready_converter_1_signal);
  mp_M01_AXI_transactor->ARREADY(m_m_axi_arready_converter_1_signal);
  mp_m_axi_rdata_converter_1 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_1");
  
  mp_m_axi_split_rdata->out_port[1](m_axi_split_rdata_out_1);
    mp_m_axi_split_rdata->add_mask(1,64,32);
  mp_m_axi_rdata_converter_1->vector_in(m_axi_split_rdata_out_1);
  mp_m_axi_rdata_converter_1->vector_out(m_m_axi_rdata_converter_1_signal);
  mp_M01_AXI_transactor->RDATA(m_m_axi_rdata_converter_1_signal);
  mp_m_axi_rresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_1");
  
  mp_m_axi_split_rresp->out_port[1](m_axi_split_rresp_out_1);
    mp_m_axi_split_rresp->add_mask(1,4,2);
  mp_m_axi_rresp_converter_1->vector_in(m_axi_split_rresp_out_1);
  mp_m_axi_rresp_converter_1->vector_out(m_m_axi_rresp_converter_1_signal);
  mp_M01_AXI_transactor->RRESP(m_m_axi_rresp_converter_1_signal);
  mp_m_axi_rlast_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_1");
  
  mp_m_axi_split_rlast->out_port[1](m_axi_split_rlast_out_1);
    mp_m_axi_split_rlast->add_mask(1,2,1);
  mp_m_axi_rlast_converter_1->vector_in(m_axi_split_rlast_out_1);
  mp_m_axi_rlast_converter_1->scalar_out(m_m_axi_rlast_converter_1_signal);
  mp_M01_AXI_transactor->RLAST(m_m_axi_rlast_converter_1_signal);
  mp_m_axi_rvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_1");
  
  mp_m_axi_split_rvalid->out_port[1](m_axi_split_rvalid_out_1);
    mp_m_axi_split_rvalid->add_mask(1,2,1);
  mp_m_axi_rvalid_converter_1->vector_in(m_axi_split_rvalid_out_1);
  mp_m_axi_rvalid_converter_1->scalar_out(m_m_axi_rvalid_converter_1_signal);
  mp_M01_AXI_transactor->RVALID(m_m_axi_rvalid_converter_1_signal);
  mp_m_axi_rready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_1");
  mp_m_axi_concat_rready->in_port[1](m_axi_concat_rready_out_1);
  mp_m_axi_concat_rready->offset_port(1, 1);
  mp_m_axi_rready_converter_1->scalar_in(m_m_axi_rready_converter_1_signal);
  mp_m_axi_rready_converter_1->vector_out(m_axi_concat_rready_out_1);
  mp_M01_AXI_transactor->RREADY(m_m_axi_rready_converter_1_signal);
  mp_M01_AXI_transactor->CLK(aclk);
  mp_M01_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M01_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M01_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void zynq_example_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->target_0_rd_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->target_0_wr_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->initiator_0_rd_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->initiator_0_wr_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

  // configure 'M01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M01_AXI_TLM_MODE") != 1)
  {
    mp_impl->initiator_1_rd_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->initiator_1_wr_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  
  }
  else
  {
    M01_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M01_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M01_AXI_transactor->wr_socket));
    M01_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M01_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_M01_AXI_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
zynq_example_xbar_0::zynq_example_xbar_0(const sc_core::sc_module_name& nm) : zynq_example_xbar_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), s_axi_awid("s_axi_awid"), s_axi_awaddr("s_axi_awaddr"), s_axi_awlen("s_axi_awlen"), s_axi_awsize("s_axi_awsize"), s_axi_awburst("s_axi_awburst"), s_axi_awlock("s_axi_awlock"), s_axi_awcache("s_axi_awcache"), s_axi_awprot("s_axi_awprot"), s_axi_awqos("s_axi_awqos"), s_axi_awvalid("s_axi_awvalid"), s_axi_awready("s_axi_awready"), s_axi_wdata("s_axi_wdata"), s_axi_wstrb("s_axi_wstrb"), s_axi_wlast("s_axi_wlast"), s_axi_wvalid("s_axi_wvalid"), s_axi_wready("s_axi_wready"), s_axi_bid("s_axi_bid"), s_axi_bresp("s_axi_bresp"), s_axi_bvalid("s_axi_bvalid"), s_axi_bready("s_axi_bready"), s_axi_arid("s_axi_arid"), s_axi_araddr("s_axi_araddr"), s_axi_arlen("s_axi_arlen"), s_axi_arsize("s_axi_arsize"), s_axi_arburst("s_axi_arburst"), s_axi_arlock("s_axi_arlock"), s_axi_arcache("s_axi_arcache"), s_axi_arprot("s_axi_arprot"), s_axi_arqos("s_axi_arqos"), s_axi_arvalid("s_axi_arvalid"), s_axi_arready("s_axi_arready"), s_axi_rid("s_axi_rid"), s_axi_rdata("s_axi_rdata"), s_axi_rresp("s_axi_rresp"), s_axi_rlast("s_axi_rlast"), s_axi_rvalid("s_axi_rvalid"), s_axi_rready("s_axi_rready"), m_axi_awaddr("m_axi_awaddr"), m_axi_awlen("m_axi_awlen"), m_axi_awsize("m_axi_awsize"), m_axi_awburst("m_axi_awburst"), m_axi_awlock("m_axi_awlock"), m_axi_awcache("m_axi_awcache"), m_axi_awprot("m_axi_awprot"), m_axi_awregion("m_axi_awregion"), m_axi_awqos("m_axi_awqos"), m_axi_awvalid("m_axi_awvalid"), m_axi_awready("m_axi_awready"), m_axi_wdata("m_axi_wdata"), m_axi_wstrb("m_axi_wstrb"), m_axi_wlast("m_axi_wlast"), m_axi_wvalid("m_axi_wvalid"), m_axi_wready("m_axi_wready"), m_axi_bresp("m_axi_bresp"), m_axi_bvalid("m_axi_bvalid"), m_axi_bready("m_axi_bready"), m_axi_araddr("m_axi_araddr"), m_axi_arlen("m_axi_arlen"), m_axi_arsize("m_axi_arsize"), m_axi_arburst("m_axi_arburst"), m_axi_arlock("m_axi_arlock"), m_axi_arcache("m_axi_arcache"), m_axi_arprot("m_axi_arprot"), m_axi_arregion("m_axi_arregion"), m_axi_arqos("m_axi_arqos"), m_axi_arvalid("m_axi_arvalid"), m_axi_arready("m_axi_arready"), m_axi_rdata("m_axi_rdata"), m_axi_rresp("m_axi_rresp"), m_axi_rlast("m_axi_rlast"), m_axi_rvalid("m_axi_rvalid"), m_axi_rready("m_axi_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_s_axi_awlock_converter = NULL;
  mp_s_axi_awvalid_converter = NULL;
  mp_s_axi_awready_converter = NULL;
  mp_s_axi_wlast_converter = NULL;
  mp_s_axi_wvalid_converter = NULL;
  mp_s_axi_wready_converter = NULL;
  mp_s_axi_bvalid_converter = NULL;
  mp_s_axi_bready_converter = NULL;
  mp_s_axi_arlock_converter = NULL;
  mp_s_axi_arvalid_converter = NULL;
  mp_s_axi_arready_converter = NULL;
  mp_s_axi_rlast_converter = NULL;
  mp_s_axi_rvalid_converter = NULL;
  mp_s_axi_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_0 = NULL;
  mp_m_axi_awlen_converter_0 = NULL;
  mp_m_axi_awsize_converter_0 = NULL;
  mp_m_axi_awburst_converter_0 = NULL;
  mp_m_axi_awlock_converter_0 = NULL;
  mp_m_axi_awcache_converter_0 = NULL;
  mp_m_axi_awprot_converter_0 = NULL;
  mp_m_axi_awregion_converter_0 = NULL;
  mp_m_axi_awqos_converter_0 = NULL;
  mp_m_axi_awvalid_converter_0 = NULL;
  mp_m_axi_awready_converter_0 = NULL;
  mp_m_axi_wdata_converter_0 = NULL;
  mp_m_axi_wstrb_converter_0 = NULL;
  mp_m_axi_wlast_converter_0 = NULL;
  mp_m_axi_wvalid_converter_0 = NULL;
  mp_m_axi_wready_converter_0 = NULL;
  mp_m_axi_bresp_converter_0 = NULL;
  mp_m_axi_bvalid_converter_0 = NULL;
  mp_m_axi_bready_converter_0 = NULL;
  mp_m_axi_araddr_converter_0 = NULL;
  mp_m_axi_arlen_converter_0 = NULL;
  mp_m_axi_arsize_converter_0 = NULL;
  mp_m_axi_arburst_converter_0 = NULL;
  mp_m_axi_arlock_converter_0 = NULL;
  mp_m_axi_arcache_converter_0 = NULL;
  mp_m_axi_arprot_converter_0 = NULL;
  mp_m_axi_arregion_converter_0 = NULL;
  mp_m_axi_arqos_converter_0 = NULL;
  mp_m_axi_arvalid_converter_0 = NULL;
  mp_m_axi_arready_converter_0 = NULL;
  mp_m_axi_rdata_converter_0 = NULL;
  mp_m_axi_rresp_converter_0 = NULL;
  mp_m_axi_rlast_converter_0 = NULL;
  mp_m_axi_rvalid_converter_0 = NULL;
  mp_m_axi_rready_converter_0 = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_m_axi_awaddr_converter_1 = NULL;
  mp_m_axi_awlen_converter_1 = NULL;
  mp_m_axi_awsize_converter_1 = NULL;
  mp_m_axi_awburst_converter_1 = NULL;
  mp_m_axi_awlock_converter_1 = NULL;
  mp_m_axi_awcache_converter_1 = NULL;
  mp_m_axi_awprot_converter_1 = NULL;
  mp_m_axi_awregion_converter_1 = NULL;
  mp_m_axi_awqos_converter_1 = NULL;
  mp_m_axi_awvalid_converter_1 = NULL;
  mp_m_axi_awready_converter_1 = NULL;
  mp_m_axi_wdata_converter_1 = NULL;
  mp_m_axi_wstrb_converter_1 = NULL;
  mp_m_axi_wlast_converter_1 = NULL;
  mp_m_axi_wvalid_converter_1 = NULL;
  mp_m_axi_wready_converter_1 = NULL;
  mp_m_axi_bresp_converter_1 = NULL;
  mp_m_axi_bvalid_converter_1 = NULL;
  mp_m_axi_bready_converter_1 = NULL;
  mp_m_axi_araddr_converter_1 = NULL;
  mp_m_axi_arlen_converter_1 = NULL;
  mp_m_axi_arsize_converter_1 = NULL;
  mp_m_axi_arburst_converter_1 = NULL;
  mp_m_axi_arlock_converter_1 = NULL;
  mp_m_axi_arcache_converter_1 = NULL;
  mp_m_axi_arprot_converter_1 = NULL;
  mp_m_axi_arregion_converter_1 = NULL;
  mp_m_axi_arqos_converter_1 = NULL;
  mp_m_axi_arvalid_converter_1 = NULL;
  mp_m_axi_arready_converter_1 = NULL;
  mp_m_axi_rdata_converter_1 = NULL;
  mp_m_axi_rresp_converter_1 = NULL;
  mp_m_axi_rlast_converter_1 = NULL;
  mp_m_axi_rvalid_converter_1 = NULL;
  mp_m_axi_rready_converter_1 = NULL;

  // initialize port junctures
  mp_m_axi_concat_araddr = NULL;
  mp_m_axi_concat_arburst = NULL;
  mp_m_axi_concat_arcache = NULL;
  mp_m_axi_concat_arlen = NULL;
  mp_m_axi_concat_arlock = NULL;
  mp_m_axi_concat_arprot = NULL;
  mp_m_axi_concat_arqos = NULL;
  mp_m_axi_concat_arregion = NULL;
  mp_m_axi_concat_arsize = NULL;
  mp_m_axi_concat_arvalid = NULL;
  mp_m_axi_concat_awaddr = NULL;
  mp_m_axi_concat_awburst = NULL;
  mp_m_axi_concat_awcache = NULL;
  mp_m_axi_concat_awlen = NULL;
  mp_m_axi_concat_awlock = NULL;
  mp_m_axi_concat_awprot = NULL;
  mp_m_axi_concat_awqos = NULL;
  mp_m_axi_concat_awregion = NULL;
  mp_m_axi_concat_awsize = NULL;
  mp_m_axi_concat_awvalid = NULL;
  mp_m_axi_concat_bready = NULL;
  mp_m_axi_concat_rready = NULL;
  mp_m_axi_concat_wdata = NULL;
  mp_m_axi_concat_wlast = NULL;
  mp_m_axi_concat_wstrb = NULL;
  mp_m_axi_concat_wvalid = NULL;
  mp_m_axi_split_arready = NULL;
  mp_m_axi_split_awready = NULL;
  mp_m_axi_split_bresp = NULL;
  mp_m_axi_split_bvalid = NULL;
  mp_m_axi_split_rdata = NULL;
  mp_m_axi_split_rlast = NULL;
  mp_m_axi_split_rresp = NULL;
  mp_m_axi_split_rvalid = NULL;
  mp_m_axi_split_wready = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWID(s_axi_awid);
  mp_S00_AXI_transactor->AWADDR(s_axi_awaddr);
  mp_S00_AXI_transactor->AWLEN(s_axi_awlen);
  mp_S00_AXI_transactor->AWSIZE(s_axi_awsize);
  mp_S00_AXI_transactor->AWBURST(s_axi_awburst);
  mp_s_axi_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awlock_converter");
  mp_s_axi_awlock_converter->vector_in(s_axi_awlock);
  mp_s_axi_awlock_converter->scalar_out(m_s_axi_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_s_axi_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(s_axi_awcache);
  mp_S00_AXI_transactor->AWPROT(s_axi_awprot);
  mp_S00_AXI_transactor->AWQOS(s_axi_awqos);
  mp_s_axi_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_awvalid_converter");
  mp_s_axi_awvalid_converter->vector_in(s_axi_awvalid);
  mp_s_axi_awvalid_converter->scalar_out(m_s_axi_awvalid_converter_signal);
  mp_S00_AXI_transactor->AWVALID(m_s_axi_awvalid_converter_signal);
  mp_s_axi_awready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_awready_converter");
  mp_s_axi_awready_converter->scalar_in(m_s_axi_awready_converter_signal);
  mp_s_axi_awready_converter->vector_out(s_axi_awready);
  mp_S00_AXI_transactor->AWREADY(m_s_axi_awready_converter_signal);
  mp_S00_AXI_transactor->WDATA(s_axi_wdata);
  mp_S00_AXI_transactor->WSTRB(s_axi_wstrb);
  mp_s_axi_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wlast_converter");
  mp_s_axi_wlast_converter->vector_in(s_axi_wlast);
  mp_s_axi_wlast_converter->scalar_out(m_s_axi_wlast_converter_signal);
  mp_S00_AXI_transactor->WLAST(m_s_axi_wlast_converter_signal);
  mp_s_axi_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_wvalid_converter");
  mp_s_axi_wvalid_converter->vector_in(s_axi_wvalid);
  mp_s_axi_wvalid_converter->scalar_out(m_s_axi_wvalid_converter_signal);
  mp_S00_AXI_transactor->WVALID(m_s_axi_wvalid_converter_signal);
  mp_s_axi_wready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_wready_converter");
  mp_s_axi_wready_converter->scalar_in(m_s_axi_wready_converter_signal);
  mp_s_axi_wready_converter->vector_out(s_axi_wready);
  mp_S00_AXI_transactor->WREADY(m_s_axi_wready_converter_signal);
  mp_S00_AXI_transactor->BID(s_axi_bid);
  mp_S00_AXI_transactor->BRESP(s_axi_bresp);
  mp_s_axi_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_bvalid_converter");
  mp_s_axi_bvalid_converter->scalar_in(m_s_axi_bvalid_converter_signal);
  mp_s_axi_bvalid_converter->vector_out(s_axi_bvalid);
  mp_S00_AXI_transactor->BVALID(m_s_axi_bvalid_converter_signal);
  mp_s_axi_bready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_bready_converter");
  mp_s_axi_bready_converter->vector_in(s_axi_bready);
  mp_s_axi_bready_converter->scalar_out(m_s_axi_bready_converter_signal);
  mp_S00_AXI_transactor->BREADY(m_s_axi_bready_converter_signal);
  mp_S00_AXI_transactor->ARID(s_axi_arid);
  mp_S00_AXI_transactor->ARADDR(s_axi_araddr);
  mp_S00_AXI_transactor->ARLEN(s_axi_arlen);
  mp_S00_AXI_transactor->ARSIZE(s_axi_arsize);
  mp_S00_AXI_transactor->ARBURST(s_axi_arburst);
  mp_s_axi_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arlock_converter");
  mp_s_axi_arlock_converter->vector_in(s_axi_arlock);
  mp_s_axi_arlock_converter->scalar_out(m_s_axi_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_s_axi_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(s_axi_arcache);
  mp_S00_AXI_transactor->ARPROT(s_axi_arprot);
  mp_S00_AXI_transactor->ARQOS(s_axi_arqos);
  mp_s_axi_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_arvalid_converter");
  mp_s_axi_arvalid_converter->vector_in(s_axi_arvalid);
  mp_s_axi_arvalid_converter->scalar_out(m_s_axi_arvalid_converter_signal);
  mp_S00_AXI_transactor->ARVALID(m_s_axi_arvalid_converter_signal);
  mp_s_axi_arready_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_arready_converter");
  mp_s_axi_arready_converter->scalar_in(m_s_axi_arready_converter_signal);
  mp_s_axi_arready_converter->vector_out(s_axi_arready);
  mp_S00_AXI_transactor->ARREADY(m_s_axi_arready_converter_signal);
  mp_S00_AXI_transactor->RID(s_axi_rid);
  mp_S00_AXI_transactor->RDATA(s_axi_rdata);
  mp_S00_AXI_transactor->RRESP(s_axi_rresp);
  mp_s_axi_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rlast_converter");
  mp_s_axi_rlast_converter->scalar_in(m_s_axi_rlast_converter_signal);
  mp_s_axi_rlast_converter->vector_out(s_axi_rlast);
  mp_S00_AXI_transactor->RLAST(m_s_axi_rlast_converter_signal);
  mp_s_axi_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("s_axi_rvalid_converter");
  mp_s_axi_rvalid_converter->scalar_in(m_s_axi_rvalid_converter_signal);
  mp_s_axi_rvalid_converter->vector_out(s_axi_rvalid);
  mp_S00_AXI_transactor->RVALID(m_s_axi_rvalid_converter_signal);
  mp_s_axi_rready_converter = new xsc::common::vectorN2scalar_converter<1>("s_axi_rready_converter");
  mp_s_axi_rready_converter->vector_in(s_axi_rready);
  mp_s_axi_rready_converter->scalar_out(m_s_axi_rready_converter_signal);
  mp_S00_AXI_transactor->RREADY(m_s_axi_rready_converter_signal);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_m_axi_awaddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_0");
  mp_m_axi_concat_awaddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_awaddr");
  mp_m_axi_concat_awaddr->in_port[0](m_axi_concat_awaddr_out_0);
  mp_m_axi_concat_awaddr->out_port(m_axi_awaddr);
    mp_m_axi_concat_awaddr->offset_port(0, 0);
  mp_m_axi_awaddr_converter_0->vector_in(m_m_axi_awaddr_converter_0_signal);
  mp_m_axi_awaddr_converter_0->vector_out(m_axi_concat_awaddr_out_0);
  mp_M00_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_0_signal);
  mp_m_axi_awlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_0");
  mp_m_axi_concat_awlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_awlen");
  mp_m_axi_concat_awlen->in_port[0](m_axi_concat_awlen_out_0);
  mp_m_axi_concat_awlen->out_port(m_axi_awlen);
    mp_m_axi_concat_awlen->offset_port(0, 0);
  mp_m_axi_awlen_converter_0->vector_in(m_m_axi_awlen_converter_0_signal);
  mp_m_axi_awlen_converter_0->vector_out(m_axi_concat_awlen_out_0);
  mp_M00_AXI_transactor->AWLEN(m_m_axi_awlen_converter_0_signal);
  mp_m_axi_awsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_0");
  mp_m_axi_concat_awsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awsize");
  mp_m_axi_concat_awsize->in_port[0](m_axi_concat_awsize_out_0);
  mp_m_axi_concat_awsize->out_port(m_axi_awsize);
    mp_m_axi_concat_awsize->offset_port(0, 0);
  mp_m_axi_awsize_converter_0->vector_in(m_m_axi_awsize_converter_0_signal);
  mp_m_axi_awsize_converter_0->vector_out(m_axi_concat_awsize_out_0);
  mp_M00_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_0_signal);
  mp_m_axi_awburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_0");
  mp_m_axi_concat_awburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_awburst");
  mp_m_axi_concat_awburst->in_port[0](m_axi_concat_awburst_out_0);
  mp_m_axi_concat_awburst->out_port(m_axi_awburst);
    mp_m_axi_concat_awburst->offset_port(0, 0);
  mp_m_axi_awburst_converter_0->vector_in(m_m_axi_awburst_converter_0_signal);
  mp_m_axi_awburst_converter_0->vector_out(m_axi_concat_awburst_out_0);
  mp_M00_AXI_transactor->AWBURST(m_m_axi_awburst_converter_0_signal);
  mp_m_axi_awlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_0");
  mp_m_axi_concat_awlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awlock");
  mp_m_axi_concat_awlock->in_port[0](m_axi_concat_awlock_out_0);
  mp_m_axi_concat_awlock->out_port(m_axi_awlock);
    mp_m_axi_concat_awlock->offset_port(0, 0);
  mp_m_axi_awlock_converter_0->scalar_in(m_m_axi_awlock_converter_0_signal);
  mp_m_axi_awlock_converter_0->vector_out(m_axi_concat_awlock_out_0);
  mp_M00_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_0_signal);
  mp_m_axi_awcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_0");
  mp_m_axi_concat_awcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awcache");
  mp_m_axi_concat_awcache->in_port[0](m_axi_concat_awcache_out_0);
  mp_m_axi_concat_awcache->out_port(m_axi_awcache);
    mp_m_axi_concat_awcache->offset_port(0, 0);
  mp_m_axi_awcache_converter_0->vector_in(m_m_axi_awcache_converter_0_signal);
  mp_m_axi_awcache_converter_0->vector_out(m_axi_concat_awcache_out_0);
  mp_M00_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_0_signal);
  mp_m_axi_awprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_0");
  mp_m_axi_concat_awprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_awprot");
  mp_m_axi_concat_awprot->in_port[0](m_axi_concat_awprot_out_0);
  mp_m_axi_concat_awprot->out_port(m_axi_awprot);
    mp_m_axi_concat_awprot->offset_port(0, 0);
  mp_m_axi_awprot_converter_0->vector_in(m_m_axi_awprot_converter_0_signal);
  mp_m_axi_awprot_converter_0->vector_out(m_axi_concat_awprot_out_0);
  mp_M00_AXI_transactor->AWPROT(m_m_axi_awprot_converter_0_signal);
  mp_m_axi_awregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_0");
  mp_m_axi_concat_awregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awregion");
  mp_m_axi_concat_awregion->in_port[0](m_axi_concat_awregion_out_0);
  mp_m_axi_concat_awregion->out_port(m_axi_awregion);
    mp_m_axi_concat_awregion->offset_port(0, 0);
  mp_m_axi_awregion_converter_0->vector_in(m_m_axi_awregion_converter_0_signal);
  mp_m_axi_awregion_converter_0->vector_out(m_axi_concat_awregion_out_0);
  mp_M00_AXI_transactor->AWREGION(m_m_axi_awregion_converter_0_signal);
  mp_m_axi_awqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_0");
  mp_m_axi_concat_awqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_awqos");
  mp_m_axi_concat_awqos->in_port[0](m_axi_concat_awqos_out_0);
  mp_m_axi_concat_awqos->out_port(m_axi_awqos);
    mp_m_axi_concat_awqos->offset_port(0, 0);
  mp_m_axi_awqos_converter_0->vector_in(m_m_axi_awqos_converter_0_signal);
  mp_m_axi_awqos_converter_0->vector_out(m_axi_concat_awqos_out_0);
  mp_M00_AXI_transactor->AWQOS(m_m_axi_awqos_converter_0_signal);
  mp_m_axi_awvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_0");
  mp_m_axi_concat_awvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_awvalid");
  mp_m_axi_concat_awvalid->in_port[0](m_axi_concat_awvalid_out_0);
  mp_m_axi_concat_awvalid->out_port(m_axi_awvalid);
    mp_m_axi_concat_awvalid->offset_port(0, 0);
  mp_m_axi_awvalid_converter_0->scalar_in(m_m_axi_awvalid_converter_0_signal);
  mp_m_axi_awvalid_converter_0->vector_out(m_axi_concat_awvalid_out_0);
  mp_M00_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_0_signal);
  mp_m_axi_awready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_0");
  mp_m_axi_split_awready = new xsc::xsc_split<2, 2>("m_axi_split_awready");
  mp_m_axi_split_awready->in_port(m_axi_awready);
  mp_m_axi_split_awready->out_port[0](m_axi_split_awready_out_0);
    mp_m_axi_split_awready->add_mask(0,1,0);
  mp_m_axi_awready_converter_0->vector_in(m_axi_split_awready_out_0);
  mp_m_axi_awready_converter_0->scalar_out(m_m_axi_awready_converter_0_signal);
  mp_M00_AXI_transactor->AWREADY(m_m_axi_awready_converter_0_signal);
  mp_m_axi_wdata_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_0");
  mp_m_axi_concat_wdata = new xsc::xsc_concatenator<64, 2>("m_axi_concat_wdata");
  mp_m_axi_concat_wdata->in_port[0](m_axi_concat_wdata_out_0);
  mp_m_axi_concat_wdata->out_port(m_axi_wdata);
    mp_m_axi_concat_wdata->offset_port(0, 0);
  mp_m_axi_wdata_converter_0->vector_in(m_m_axi_wdata_converter_0_signal);
  mp_m_axi_wdata_converter_0->vector_out(m_axi_concat_wdata_out_0);
  mp_M00_AXI_transactor->WDATA(m_m_axi_wdata_converter_0_signal);
  mp_m_axi_wstrb_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_0");
  mp_m_axi_concat_wstrb = new xsc::xsc_concatenator<8, 2>("m_axi_concat_wstrb");
  mp_m_axi_concat_wstrb->in_port[0](m_axi_concat_wstrb_out_0);
  mp_m_axi_concat_wstrb->out_port(m_axi_wstrb);
    mp_m_axi_concat_wstrb->offset_port(0, 0);
  mp_m_axi_wstrb_converter_0->vector_in(m_m_axi_wstrb_converter_0_signal);
  mp_m_axi_wstrb_converter_0->vector_out(m_axi_concat_wstrb_out_0);
  mp_M00_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_0_signal);
  mp_m_axi_wlast_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_0");
  mp_m_axi_concat_wlast = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wlast");
  mp_m_axi_concat_wlast->in_port[0](m_axi_concat_wlast_out_0);
  mp_m_axi_concat_wlast->out_port(m_axi_wlast);
    mp_m_axi_concat_wlast->offset_port(0, 0);
  mp_m_axi_wlast_converter_0->scalar_in(m_m_axi_wlast_converter_0_signal);
  mp_m_axi_wlast_converter_0->vector_out(m_axi_concat_wlast_out_0);
  mp_M00_AXI_transactor->WLAST(m_m_axi_wlast_converter_0_signal);
  mp_m_axi_wvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_0");
  mp_m_axi_concat_wvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_wvalid");
  mp_m_axi_concat_wvalid->in_port[0](m_axi_concat_wvalid_out_0);
  mp_m_axi_concat_wvalid->out_port(m_axi_wvalid);
    mp_m_axi_concat_wvalid->offset_port(0, 0);
  mp_m_axi_wvalid_converter_0->scalar_in(m_m_axi_wvalid_converter_0_signal);
  mp_m_axi_wvalid_converter_0->vector_out(m_axi_concat_wvalid_out_0);
  mp_M00_AXI_transactor->WVALID(m_m_axi_wvalid_converter_0_signal);
  mp_m_axi_wready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_0");
  mp_m_axi_split_wready = new xsc::xsc_split<2, 2>("m_axi_split_wready");
  mp_m_axi_split_wready->in_port(m_axi_wready);
  mp_m_axi_split_wready->out_port[0](m_axi_split_wready_out_0);
    mp_m_axi_split_wready->add_mask(0,1,0);
  mp_m_axi_wready_converter_0->vector_in(m_axi_split_wready_out_0);
  mp_m_axi_wready_converter_0->scalar_out(m_m_axi_wready_converter_0_signal);
  mp_M00_AXI_transactor->WREADY(m_m_axi_wready_converter_0_signal);
  mp_m_axi_bresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_0");
  mp_m_axi_split_bresp = new xsc::xsc_split<4, 2>("m_axi_split_bresp");
  mp_m_axi_split_bresp->in_port(m_axi_bresp);
  mp_m_axi_split_bresp->out_port[0](m_axi_split_bresp_out_0);
    mp_m_axi_split_bresp->add_mask(0,2,0);
  mp_m_axi_bresp_converter_0->vector_in(m_axi_split_bresp_out_0);
  mp_m_axi_bresp_converter_0->vector_out(m_m_axi_bresp_converter_0_signal);
  mp_M00_AXI_transactor->BRESP(m_m_axi_bresp_converter_0_signal);
  mp_m_axi_bvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_0");
  mp_m_axi_split_bvalid = new xsc::xsc_split<2, 2>("m_axi_split_bvalid");
  mp_m_axi_split_bvalid->in_port(m_axi_bvalid);
  mp_m_axi_split_bvalid->out_port[0](m_axi_split_bvalid_out_0);
    mp_m_axi_split_bvalid->add_mask(0,1,0);
  mp_m_axi_bvalid_converter_0->vector_in(m_axi_split_bvalid_out_0);
  mp_m_axi_bvalid_converter_0->scalar_out(m_m_axi_bvalid_converter_0_signal);
  mp_M00_AXI_transactor->BVALID(m_m_axi_bvalid_converter_0_signal);
  mp_m_axi_bready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_0");
  mp_m_axi_concat_bready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_bready");
  mp_m_axi_concat_bready->in_port[0](m_axi_concat_bready_out_0);
  mp_m_axi_concat_bready->out_port(m_axi_bready);
    mp_m_axi_concat_bready->offset_port(0, 0);
  mp_m_axi_bready_converter_0->scalar_in(m_m_axi_bready_converter_0_signal);
  mp_m_axi_bready_converter_0->vector_out(m_axi_concat_bready_out_0);
  mp_M00_AXI_transactor->BREADY(m_m_axi_bready_converter_0_signal);
  mp_m_axi_araddr_converter_0 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_0");
  mp_m_axi_concat_araddr = new xsc::xsc_concatenator<64, 2>("m_axi_concat_araddr");
  mp_m_axi_concat_araddr->in_port[0](m_axi_concat_araddr_out_0);
  mp_m_axi_concat_araddr->out_port(m_axi_araddr);
    mp_m_axi_concat_araddr->offset_port(0, 0);
  mp_m_axi_araddr_converter_0->vector_in(m_m_axi_araddr_converter_0_signal);
  mp_m_axi_araddr_converter_0->vector_out(m_axi_concat_araddr_out_0);
  mp_M00_AXI_transactor->ARADDR(m_m_axi_araddr_converter_0_signal);
  mp_m_axi_arlen_converter_0 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_0");
  mp_m_axi_concat_arlen = new xsc::xsc_concatenator<16, 2>("m_axi_concat_arlen");
  mp_m_axi_concat_arlen->in_port[0](m_axi_concat_arlen_out_0);
  mp_m_axi_concat_arlen->out_port(m_axi_arlen);
    mp_m_axi_concat_arlen->offset_port(0, 0);
  mp_m_axi_arlen_converter_0->vector_in(m_m_axi_arlen_converter_0_signal);
  mp_m_axi_arlen_converter_0->vector_out(m_axi_concat_arlen_out_0);
  mp_M00_AXI_transactor->ARLEN(m_m_axi_arlen_converter_0_signal);
  mp_m_axi_arsize_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_0");
  mp_m_axi_concat_arsize = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arsize");
  mp_m_axi_concat_arsize->in_port[0](m_axi_concat_arsize_out_0);
  mp_m_axi_concat_arsize->out_port(m_axi_arsize);
    mp_m_axi_concat_arsize->offset_port(0, 0);
  mp_m_axi_arsize_converter_0->vector_in(m_m_axi_arsize_converter_0_signal);
  mp_m_axi_arsize_converter_0->vector_out(m_axi_concat_arsize_out_0);
  mp_M00_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_0_signal);
  mp_m_axi_arburst_converter_0 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_0");
  mp_m_axi_concat_arburst = new xsc::xsc_concatenator<4, 2>("m_axi_concat_arburst");
  mp_m_axi_concat_arburst->in_port[0](m_axi_concat_arburst_out_0);
  mp_m_axi_concat_arburst->out_port(m_axi_arburst);
    mp_m_axi_concat_arburst->offset_port(0, 0);
  mp_m_axi_arburst_converter_0->vector_in(m_m_axi_arburst_converter_0_signal);
  mp_m_axi_arburst_converter_0->vector_out(m_axi_concat_arburst_out_0);
  mp_M00_AXI_transactor->ARBURST(m_m_axi_arburst_converter_0_signal);
  mp_m_axi_arlock_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_0");
  mp_m_axi_concat_arlock = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arlock");
  mp_m_axi_concat_arlock->in_port[0](m_axi_concat_arlock_out_0);
  mp_m_axi_concat_arlock->out_port(m_axi_arlock);
    mp_m_axi_concat_arlock->offset_port(0, 0);
  mp_m_axi_arlock_converter_0->scalar_in(m_m_axi_arlock_converter_0_signal);
  mp_m_axi_arlock_converter_0->vector_out(m_axi_concat_arlock_out_0);
  mp_M00_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_0_signal);
  mp_m_axi_arcache_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_0");
  mp_m_axi_concat_arcache = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arcache");
  mp_m_axi_concat_arcache->in_port[0](m_axi_concat_arcache_out_0);
  mp_m_axi_concat_arcache->out_port(m_axi_arcache);
    mp_m_axi_concat_arcache->offset_port(0, 0);
  mp_m_axi_arcache_converter_0->vector_in(m_m_axi_arcache_converter_0_signal);
  mp_m_axi_arcache_converter_0->vector_out(m_axi_concat_arcache_out_0);
  mp_M00_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_0_signal);
  mp_m_axi_arprot_converter_0 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_0");
  mp_m_axi_concat_arprot = new xsc::xsc_concatenator<6, 2>("m_axi_concat_arprot");
  mp_m_axi_concat_arprot->in_port[0](m_axi_concat_arprot_out_0);
  mp_m_axi_concat_arprot->out_port(m_axi_arprot);
    mp_m_axi_concat_arprot->offset_port(0, 0);
  mp_m_axi_arprot_converter_0->vector_in(m_m_axi_arprot_converter_0_signal);
  mp_m_axi_arprot_converter_0->vector_out(m_axi_concat_arprot_out_0);
  mp_M00_AXI_transactor->ARPROT(m_m_axi_arprot_converter_0_signal);
  mp_m_axi_arregion_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_0");
  mp_m_axi_concat_arregion = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arregion");
  mp_m_axi_concat_arregion->in_port[0](m_axi_concat_arregion_out_0);
  mp_m_axi_concat_arregion->out_port(m_axi_arregion);
    mp_m_axi_concat_arregion->offset_port(0, 0);
  mp_m_axi_arregion_converter_0->vector_in(m_m_axi_arregion_converter_0_signal);
  mp_m_axi_arregion_converter_0->vector_out(m_axi_concat_arregion_out_0);
  mp_M00_AXI_transactor->ARREGION(m_m_axi_arregion_converter_0_signal);
  mp_m_axi_arqos_converter_0 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_0");
  mp_m_axi_concat_arqos = new xsc::xsc_concatenator<8, 2>("m_axi_concat_arqos");
  mp_m_axi_concat_arqos->in_port[0](m_axi_concat_arqos_out_0);
  mp_m_axi_concat_arqos->out_port(m_axi_arqos);
    mp_m_axi_concat_arqos->offset_port(0, 0);
  mp_m_axi_arqos_converter_0->vector_in(m_m_axi_arqos_converter_0_signal);
  mp_m_axi_arqos_converter_0->vector_out(m_axi_concat_arqos_out_0);
  mp_M00_AXI_transactor->ARQOS(m_m_axi_arqos_converter_0_signal);
  mp_m_axi_arvalid_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_0");
  mp_m_axi_concat_arvalid = new xsc::xsc_concatenator<2, 2>("m_axi_concat_arvalid");
  mp_m_axi_concat_arvalid->in_port[0](m_axi_concat_arvalid_out_0);
  mp_m_axi_concat_arvalid->out_port(m_axi_arvalid);
    mp_m_axi_concat_arvalid->offset_port(0, 0);
  mp_m_axi_arvalid_converter_0->scalar_in(m_m_axi_arvalid_converter_0_signal);
  mp_m_axi_arvalid_converter_0->vector_out(m_axi_concat_arvalid_out_0);
  mp_M00_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_0_signal);
  mp_m_axi_arready_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_0");
  mp_m_axi_split_arready = new xsc::xsc_split<2, 2>("m_axi_split_arready");
  mp_m_axi_split_arready->in_port(m_axi_arready);
  mp_m_axi_split_arready->out_port[0](m_axi_split_arready_out_0);
    mp_m_axi_split_arready->add_mask(0,1,0);
  mp_m_axi_arready_converter_0->vector_in(m_axi_split_arready_out_0);
  mp_m_axi_arready_converter_0->scalar_out(m_m_axi_arready_converter_0_signal);
  mp_M00_AXI_transactor->ARREADY(m_m_axi_arready_converter_0_signal);
  mp_m_axi_rdata_converter_0 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_0");
  mp_m_axi_split_rdata = new xsc::xsc_split<64, 2>("m_axi_split_rdata");
  mp_m_axi_split_rdata->in_port(m_axi_rdata);
  mp_m_axi_split_rdata->out_port[0](m_axi_split_rdata_out_0);
    mp_m_axi_split_rdata->add_mask(0,32,0);
  mp_m_axi_rdata_converter_0->vector_in(m_axi_split_rdata_out_0);
  mp_m_axi_rdata_converter_0->vector_out(m_m_axi_rdata_converter_0_signal);
  mp_M00_AXI_transactor->RDATA(m_m_axi_rdata_converter_0_signal);
  mp_m_axi_rresp_converter_0 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_0");
  mp_m_axi_split_rresp = new xsc::xsc_split<4, 2>("m_axi_split_rresp");
  mp_m_axi_split_rresp->in_port(m_axi_rresp);
  mp_m_axi_split_rresp->out_port[0](m_axi_split_rresp_out_0);
    mp_m_axi_split_rresp->add_mask(0,2,0);
  mp_m_axi_rresp_converter_0->vector_in(m_axi_split_rresp_out_0);
  mp_m_axi_rresp_converter_0->vector_out(m_m_axi_rresp_converter_0_signal);
  mp_M00_AXI_transactor->RRESP(m_m_axi_rresp_converter_0_signal);
  mp_m_axi_rlast_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_0");
  mp_m_axi_split_rlast = new xsc::xsc_split<2, 2>("m_axi_split_rlast");
  mp_m_axi_split_rlast->in_port(m_axi_rlast);
  mp_m_axi_split_rlast->out_port[0](m_axi_split_rlast_out_0);
    mp_m_axi_split_rlast->add_mask(0,1,0);
  mp_m_axi_rlast_converter_0->vector_in(m_axi_split_rlast_out_0);
  mp_m_axi_rlast_converter_0->scalar_out(m_m_axi_rlast_converter_0_signal);
  mp_M00_AXI_transactor->RLAST(m_m_axi_rlast_converter_0_signal);
  mp_m_axi_rvalid_converter_0 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_0");
  mp_m_axi_split_rvalid = new xsc::xsc_split<2, 2>("m_axi_split_rvalid");
  mp_m_axi_split_rvalid->in_port(m_axi_rvalid);
  mp_m_axi_split_rvalid->out_port[0](m_axi_split_rvalid_out_0);
    mp_m_axi_split_rvalid->add_mask(0,1,0);
  mp_m_axi_rvalid_converter_0->vector_in(m_axi_split_rvalid_out_0);
  mp_m_axi_rvalid_converter_0->scalar_out(m_m_axi_rvalid_converter_0_signal);
  mp_M00_AXI_transactor->RVALID(m_m_axi_rvalid_converter_0_signal);
  mp_m_axi_rready_converter_0 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_0");
  mp_m_axi_concat_rready = new xsc::xsc_concatenator<2, 2>("m_axi_concat_rready");
  mp_m_axi_concat_rready->in_port[0](m_axi_concat_rready_out_0);
  mp_m_axi_concat_rready->out_port(m_axi_rready);
    mp_m_axi_concat_rready->offset_port(0, 0);
  mp_m_axi_rready_converter_0->scalar_in(m_m_axi_rready_converter_0_signal);
  mp_m_axi_rready_converter_0->vector_out(m_axi_concat_rready_out_0);
  mp_M00_AXI_transactor->RREADY(m_m_axi_rready_converter_0_signal);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);
  // configure M01_AXI_transactor
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "5e+07");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "zynq_example_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);
  mp_m_axi_awaddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_awaddr_converter_1");
  mp_m_axi_concat_awaddr->in_port[1](m_axi_concat_awaddr_out_1);
  mp_m_axi_concat_awaddr->offset_port(1, 32);
  mp_m_axi_awaddr_converter_1->vector_in(m_m_axi_awaddr_converter_1_signal);
  mp_m_axi_awaddr_converter_1->vector_out(m_axi_concat_awaddr_out_1);
  mp_M01_AXI_transactor->AWADDR(m_m_axi_awaddr_converter_1_signal);
  mp_m_axi_awlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_awlen_converter_1");
  mp_m_axi_concat_awlen->in_port[1](m_axi_concat_awlen_out_1);
  mp_m_axi_concat_awlen->offset_port(1, 8);
  mp_m_axi_awlen_converter_1->vector_in(m_m_axi_awlen_converter_1_signal);
  mp_m_axi_awlen_converter_1->vector_out(m_axi_concat_awlen_out_1);
  mp_M01_AXI_transactor->AWLEN(m_m_axi_awlen_converter_1_signal);
  mp_m_axi_awsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awsize_converter_1");
  mp_m_axi_concat_awsize->in_port[1](m_axi_concat_awsize_out_1);
  mp_m_axi_concat_awsize->offset_port(1, 3);
  mp_m_axi_awsize_converter_1->vector_in(m_m_axi_awsize_converter_1_signal);
  mp_m_axi_awsize_converter_1->vector_out(m_axi_concat_awsize_out_1);
  mp_M01_AXI_transactor->AWSIZE(m_m_axi_awsize_converter_1_signal);
  mp_m_axi_awburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_awburst_converter_1");
  mp_m_axi_concat_awburst->in_port[1](m_axi_concat_awburst_out_1);
  mp_m_axi_concat_awburst->offset_port(1, 2);
  mp_m_axi_awburst_converter_1->vector_in(m_m_axi_awburst_converter_1_signal);
  mp_m_axi_awburst_converter_1->vector_out(m_axi_concat_awburst_out_1);
  mp_M01_AXI_transactor->AWBURST(m_m_axi_awburst_converter_1_signal);
  mp_m_axi_awlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awlock_converter_1");
  mp_m_axi_concat_awlock->in_port[1](m_axi_concat_awlock_out_1);
  mp_m_axi_concat_awlock->offset_port(1, 1);
  mp_m_axi_awlock_converter_1->scalar_in(m_m_axi_awlock_converter_1_signal);
  mp_m_axi_awlock_converter_1->vector_out(m_axi_concat_awlock_out_1);
  mp_M01_AXI_transactor->AWLOCK(m_m_axi_awlock_converter_1_signal);
  mp_m_axi_awcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awcache_converter_1");
  mp_m_axi_concat_awcache->in_port[1](m_axi_concat_awcache_out_1);
  mp_m_axi_concat_awcache->offset_port(1, 4);
  mp_m_axi_awcache_converter_1->vector_in(m_m_axi_awcache_converter_1_signal);
  mp_m_axi_awcache_converter_1->vector_out(m_axi_concat_awcache_out_1);
  mp_M01_AXI_transactor->AWCACHE(m_m_axi_awcache_converter_1_signal);
  mp_m_axi_awprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_awprot_converter_1");
  mp_m_axi_concat_awprot->in_port[1](m_axi_concat_awprot_out_1);
  mp_m_axi_concat_awprot->offset_port(1, 3);
  mp_m_axi_awprot_converter_1->vector_in(m_m_axi_awprot_converter_1_signal);
  mp_m_axi_awprot_converter_1->vector_out(m_axi_concat_awprot_out_1);
  mp_M01_AXI_transactor->AWPROT(m_m_axi_awprot_converter_1_signal);
  mp_m_axi_awregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awregion_converter_1");
  mp_m_axi_concat_awregion->in_port[1](m_axi_concat_awregion_out_1);
  mp_m_axi_concat_awregion->offset_port(1, 4);
  mp_m_axi_awregion_converter_1->vector_in(m_m_axi_awregion_converter_1_signal);
  mp_m_axi_awregion_converter_1->vector_out(m_axi_concat_awregion_out_1);
  mp_M01_AXI_transactor->AWREGION(m_m_axi_awregion_converter_1_signal);
  mp_m_axi_awqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_awqos_converter_1");
  mp_m_axi_concat_awqos->in_port[1](m_axi_concat_awqos_out_1);
  mp_m_axi_concat_awqos->offset_port(1, 4);
  mp_m_axi_awqos_converter_1->vector_in(m_m_axi_awqos_converter_1_signal);
  mp_m_axi_awqos_converter_1->vector_out(m_axi_concat_awqos_out_1);
  mp_M01_AXI_transactor->AWQOS(m_m_axi_awqos_converter_1_signal);
  mp_m_axi_awvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_awvalid_converter_1");
  mp_m_axi_concat_awvalid->in_port[1](m_axi_concat_awvalid_out_1);
  mp_m_axi_concat_awvalid->offset_port(1, 1);
  mp_m_axi_awvalid_converter_1->scalar_in(m_m_axi_awvalid_converter_1_signal);
  mp_m_axi_awvalid_converter_1->vector_out(m_axi_concat_awvalid_out_1);
  mp_M01_AXI_transactor->AWVALID(m_m_axi_awvalid_converter_1_signal);
  mp_m_axi_awready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_awready_converter_1");
  
  mp_m_axi_split_awready->out_port[1](m_axi_split_awready_out_1);
    mp_m_axi_split_awready->add_mask(1,2,1);
  mp_m_axi_awready_converter_1->vector_in(m_axi_split_awready_out_1);
  mp_m_axi_awready_converter_1->scalar_out(m_m_axi_awready_converter_1_signal);
  mp_M01_AXI_transactor->AWREADY(m_m_axi_awready_converter_1_signal);
  mp_m_axi_wdata_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_wdata_converter_1");
  mp_m_axi_concat_wdata->in_port[1](m_axi_concat_wdata_out_1);
  mp_m_axi_concat_wdata->offset_port(1, 32);
  mp_m_axi_wdata_converter_1->vector_in(m_m_axi_wdata_converter_1_signal);
  mp_m_axi_wdata_converter_1->vector_out(m_axi_concat_wdata_out_1);
  mp_M01_AXI_transactor->WDATA(m_m_axi_wdata_converter_1_signal);
  mp_m_axi_wstrb_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_wstrb_converter_1");
  mp_m_axi_concat_wstrb->in_port[1](m_axi_concat_wstrb_out_1);
  mp_m_axi_concat_wstrb->offset_port(1, 4);
  mp_m_axi_wstrb_converter_1->vector_in(m_m_axi_wstrb_converter_1_signal);
  mp_m_axi_wstrb_converter_1->vector_out(m_axi_concat_wstrb_out_1);
  mp_M01_AXI_transactor->WSTRB(m_m_axi_wstrb_converter_1_signal);
  mp_m_axi_wlast_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wlast_converter_1");
  mp_m_axi_concat_wlast->in_port[1](m_axi_concat_wlast_out_1);
  mp_m_axi_concat_wlast->offset_port(1, 1);
  mp_m_axi_wlast_converter_1->scalar_in(m_m_axi_wlast_converter_1_signal);
  mp_m_axi_wlast_converter_1->vector_out(m_axi_concat_wlast_out_1);
  mp_M01_AXI_transactor->WLAST(m_m_axi_wlast_converter_1_signal);
  mp_m_axi_wvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_wvalid_converter_1");
  mp_m_axi_concat_wvalid->in_port[1](m_axi_concat_wvalid_out_1);
  mp_m_axi_concat_wvalid->offset_port(1, 1);
  mp_m_axi_wvalid_converter_1->scalar_in(m_m_axi_wvalid_converter_1_signal);
  mp_m_axi_wvalid_converter_1->vector_out(m_axi_concat_wvalid_out_1);
  mp_M01_AXI_transactor->WVALID(m_m_axi_wvalid_converter_1_signal);
  mp_m_axi_wready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_wready_converter_1");
  
  mp_m_axi_split_wready->out_port[1](m_axi_split_wready_out_1);
    mp_m_axi_split_wready->add_mask(1,2,1);
  mp_m_axi_wready_converter_1->vector_in(m_axi_split_wready_out_1);
  mp_m_axi_wready_converter_1->scalar_out(m_m_axi_wready_converter_1_signal);
  mp_M01_AXI_transactor->WREADY(m_m_axi_wready_converter_1_signal);
  mp_m_axi_bresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_bresp_converter_1");
  
  mp_m_axi_split_bresp->out_port[1](m_axi_split_bresp_out_1);
    mp_m_axi_split_bresp->add_mask(1,4,2);
  mp_m_axi_bresp_converter_1->vector_in(m_axi_split_bresp_out_1);
  mp_m_axi_bresp_converter_1->vector_out(m_m_axi_bresp_converter_1_signal);
  mp_M01_AXI_transactor->BRESP(m_m_axi_bresp_converter_1_signal);
  mp_m_axi_bvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_bvalid_converter_1");
  
  mp_m_axi_split_bvalid->out_port[1](m_axi_split_bvalid_out_1);
    mp_m_axi_split_bvalid->add_mask(1,2,1);
  mp_m_axi_bvalid_converter_1->vector_in(m_axi_split_bvalid_out_1);
  mp_m_axi_bvalid_converter_1->scalar_out(m_m_axi_bvalid_converter_1_signal);
  mp_M01_AXI_transactor->BVALID(m_m_axi_bvalid_converter_1_signal);
  mp_m_axi_bready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_bready_converter_1");
  mp_m_axi_concat_bready->in_port[1](m_axi_concat_bready_out_1);
  mp_m_axi_concat_bready->offset_port(1, 1);
  mp_m_axi_bready_converter_1->scalar_in(m_m_axi_bready_converter_1_signal);
  mp_m_axi_bready_converter_1->vector_out(m_axi_concat_bready_out_1);
  mp_M01_AXI_transactor->BREADY(m_m_axi_bready_converter_1_signal);
  mp_m_axi_araddr_converter_1 = new xsc::common::vector2vector_converter<32,64>("m_axi_araddr_converter_1");
  mp_m_axi_concat_araddr->in_port[1](m_axi_concat_araddr_out_1);
  mp_m_axi_concat_araddr->offset_port(1, 32);
  mp_m_axi_araddr_converter_1->vector_in(m_m_axi_araddr_converter_1_signal);
  mp_m_axi_araddr_converter_1->vector_out(m_axi_concat_araddr_out_1);
  mp_M01_AXI_transactor->ARADDR(m_m_axi_araddr_converter_1_signal);
  mp_m_axi_arlen_converter_1 = new xsc::common::vector2vector_converter<8,16>("m_axi_arlen_converter_1");
  mp_m_axi_concat_arlen->in_port[1](m_axi_concat_arlen_out_1);
  mp_m_axi_concat_arlen->offset_port(1, 8);
  mp_m_axi_arlen_converter_1->vector_in(m_m_axi_arlen_converter_1_signal);
  mp_m_axi_arlen_converter_1->vector_out(m_axi_concat_arlen_out_1);
  mp_M01_AXI_transactor->ARLEN(m_m_axi_arlen_converter_1_signal);
  mp_m_axi_arsize_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arsize_converter_1");
  mp_m_axi_concat_arsize->in_port[1](m_axi_concat_arsize_out_1);
  mp_m_axi_concat_arsize->offset_port(1, 3);
  mp_m_axi_arsize_converter_1->vector_in(m_m_axi_arsize_converter_1_signal);
  mp_m_axi_arsize_converter_1->vector_out(m_axi_concat_arsize_out_1);
  mp_M01_AXI_transactor->ARSIZE(m_m_axi_arsize_converter_1_signal);
  mp_m_axi_arburst_converter_1 = new xsc::common::vector2vector_converter<2,4>("m_axi_arburst_converter_1");
  mp_m_axi_concat_arburst->in_port[1](m_axi_concat_arburst_out_1);
  mp_m_axi_concat_arburst->offset_port(1, 2);
  mp_m_axi_arburst_converter_1->vector_in(m_m_axi_arburst_converter_1_signal);
  mp_m_axi_arburst_converter_1->vector_out(m_axi_concat_arburst_out_1);
  mp_M01_AXI_transactor->ARBURST(m_m_axi_arburst_converter_1_signal);
  mp_m_axi_arlock_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arlock_converter_1");
  mp_m_axi_concat_arlock->in_port[1](m_axi_concat_arlock_out_1);
  mp_m_axi_concat_arlock->offset_port(1, 1);
  mp_m_axi_arlock_converter_1->scalar_in(m_m_axi_arlock_converter_1_signal);
  mp_m_axi_arlock_converter_1->vector_out(m_axi_concat_arlock_out_1);
  mp_M01_AXI_transactor->ARLOCK(m_m_axi_arlock_converter_1_signal);
  mp_m_axi_arcache_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arcache_converter_1");
  mp_m_axi_concat_arcache->in_port[1](m_axi_concat_arcache_out_1);
  mp_m_axi_concat_arcache->offset_port(1, 4);
  mp_m_axi_arcache_converter_1->vector_in(m_m_axi_arcache_converter_1_signal);
  mp_m_axi_arcache_converter_1->vector_out(m_axi_concat_arcache_out_1);
  mp_M01_AXI_transactor->ARCACHE(m_m_axi_arcache_converter_1_signal);
  mp_m_axi_arprot_converter_1 = new xsc::common::vector2vector_converter<3,6>("m_axi_arprot_converter_1");
  mp_m_axi_concat_arprot->in_port[1](m_axi_concat_arprot_out_1);
  mp_m_axi_concat_arprot->offset_port(1, 3);
  mp_m_axi_arprot_converter_1->vector_in(m_m_axi_arprot_converter_1_signal);
  mp_m_axi_arprot_converter_1->vector_out(m_axi_concat_arprot_out_1);
  mp_M01_AXI_transactor->ARPROT(m_m_axi_arprot_converter_1_signal);
  mp_m_axi_arregion_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arregion_converter_1");
  mp_m_axi_concat_arregion->in_port[1](m_axi_concat_arregion_out_1);
  mp_m_axi_concat_arregion->offset_port(1, 4);
  mp_m_axi_arregion_converter_1->vector_in(m_m_axi_arregion_converter_1_signal);
  mp_m_axi_arregion_converter_1->vector_out(m_axi_concat_arregion_out_1);
  mp_M01_AXI_transactor->ARREGION(m_m_axi_arregion_converter_1_signal);
  mp_m_axi_arqos_converter_1 = new xsc::common::vector2vector_converter<4,8>("m_axi_arqos_converter_1");
  mp_m_axi_concat_arqos->in_port[1](m_axi_concat_arqos_out_1);
  mp_m_axi_concat_arqos->offset_port(1, 4);
  mp_m_axi_arqos_converter_1->vector_in(m_m_axi_arqos_converter_1_signal);
  mp_m_axi_arqos_converter_1->vector_out(m_axi_concat_arqos_out_1);
  mp_M01_AXI_transactor->ARQOS(m_m_axi_arqos_converter_1_signal);
  mp_m_axi_arvalid_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_arvalid_converter_1");
  mp_m_axi_concat_arvalid->in_port[1](m_axi_concat_arvalid_out_1);
  mp_m_axi_concat_arvalid->offset_port(1, 1);
  mp_m_axi_arvalid_converter_1->scalar_in(m_m_axi_arvalid_converter_1_signal);
  mp_m_axi_arvalid_converter_1->vector_out(m_axi_concat_arvalid_out_1);
  mp_M01_AXI_transactor->ARVALID(m_m_axi_arvalid_converter_1_signal);
  mp_m_axi_arready_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_arready_converter_1");
  
  mp_m_axi_split_arready->out_port[1](m_axi_split_arready_out_1);
    mp_m_axi_split_arready->add_mask(1,2,1);
  mp_m_axi_arready_converter_1->vector_in(m_axi_split_arready_out_1);
  mp_m_axi_arready_converter_1->scalar_out(m_m_axi_arready_converter_1_signal);
  mp_M01_AXI_transactor->ARREADY(m_m_axi_arready_converter_1_signal);
  mp_m_axi_rdata_converter_1 = new xsc::common::vector2vector_converter<64,32>("m_axi_rdata_converter_1");
  
  mp_m_axi_split_rdata->out_port[1](m_axi_split_rdata_out_1);
    mp_m_axi_split_rdata->add_mask(1,64,32);
  mp_m_axi_rdata_converter_1->vector_in(m_axi_split_rdata_out_1);
  mp_m_axi_rdata_converter_1->vector_out(m_m_axi_rdata_converter_1_signal);
  mp_M01_AXI_transactor->RDATA(m_m_axi_rdata_converter_1_signal);
  mp_m_axi_rresp_converter_1 = new xsc::common::vector2vector_converter<4,2>("m_axi_rresp_converter_1");
  
  mp_m_axi_split_rresp->out_port[1](m_axi_split_rresp_out_1);
    mp_m_axi_split_rresp->add_mask(1,4,2);
  mp_m_axi_rresp_converter_1->vector_in(m_axi_split_rresp_out_1);
  mp_m_axi_rresp_converter_1->vector_out(m_m_axi_rresp_converter_1_signal);
  mp_M01_AXI_transactor->RRESP(m_m_axi_rresp_converter_1_signal);
  mp_m_axi_rlast_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rlast_converter_1");
  
  mp_m_axi_split_rlast->out_port[1](m_axi_split_rlast_out_1);
    mp_m_axi_split_rlast->add_mask(1,2,1);
  mp_m_axi_rlast_converter_1->vector_in(m_axi_split_rlast_out_1);
  mp_m_axi_rlast_converter_1->scalar_out(m_m_axi_rlast_converter_1_signal);
  mp_M01_AXI_transactor->RLAST(m_m_axi_rlast_converter_1_signal);
  mp_m_axi_rvalid_converter_1 = new xsc::common::vectorN2scalar_converter<2>("m_axi_rvalid_converter_1");
  
  mp_m_axi_split_rvalid->out_port[1](m_axi_split_rvalid_out_1);
    mp_m_axi_split_rvalid->add_mask(1,2,1);
  mp_m_axi_rvalid_converter_1->vector_in(m_axi_split_rvalid_out_1);
  mp_m_axi_rvalid_converter_1->scalar_out(m_m_axi_rvalid_converter_1_signal);
  mp_M01_AXI_transactor->RVALID(m_m_axi_rvalid_converter_1_signal);
  mp_m_axi_rready_converter_1 = new xsc::common::scalar2vectorN_converter<2>("m_axi_rready_converter_1");
  mp_m_axi_concat_rready->in_port[1](m_axi_concat_rready_out_1);
  mp_m_axi_concat_rready->offset_port(1, 1);
  mp_m_axi_rready_converter_1->scalar_in(m_m_axi_rready_converter_1_signal);
  mp_m_axi_rready_converter_1->vector_out(m_axi_concat_rready_out_1);
  mp_M01_AXI_transactor->RREADY(m_m_axi_rready_converter_1_signal);
  mp_M01_AXI_transactor->CLK(aclk);
  mp_M01_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M01_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M01_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void zynq_example_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->target_0_rd_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->target_0_wr_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->initiator_0_rd_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->initiator_0_wr_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

  // configure 'M01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zynq_example_xbar_0", "M01_AXI_TLM_MODE") != 1)
  {
    mp_impl->initiator_1_rd_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->initiator_1_wr_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  
  }
  else
  {
    M01_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M01_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M01_AXI_transactor->wr_socket));
    M01_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M01_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_M01_AXI_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




zynq_example_xbar_0::~zynq_example_xbar_0()
{
  delete mp_S00_AXI_transactor;
  delete mp_s_axi_awlock_converter;
  delete mp_s_axi_awvalid_converter;
  delete mp_s_axi_awready_converter;
  delete mp_s_axi_wlast_converter;
  delete mp_s_axi_wvalid_converter;
  delete mp_s_axi_wready_converter;
  delete mp_s_axi_bvalid_converter;
  delete mp_s_axi_bready_converter;
  delete mp_s_axi_arlock_converter;
  delete mp_s_axi_arvalid_converter;
  delete mp_s_axi_arready_converter;
  delete mp_s_axi_rlast_converter;
  delete mp_s_axi_rvalid_converter;
  delete mp_s_axi_rready_converter;

  delete mp_M00_AXI_transactor;
  delete mp_m_axi_awaddr_converter_0;
  delete mp_m_axi_awlen_converter_0;
  delete mp_m_axi_awsize_converter_0;
  delete mp_m_axi_awburst_converter_0;
  delete mp_m_axi_awlock_converter_0;
  delete mp_m_axi_awcache_converter_0;
  delete mp_m_axi_awprot_converter_0;
  delete mp_m_axi_awregion_converter_0;
  delete mp_m_axi_awqos_converter_0;
  delete mp_m_axi_awvalid_converter_0;
  delete mp_m_axi_awready_converter_0;
  delete mp_m_axi_wdata_converter_0;
  delete mp_m_axi_wstrb_converter_0;
  delete mp_m_axi_wlast_converter_0;
  delete mp_m_axi_wvalid_converter_0;
  delete mp_m_axi_wready_converter_0;
  delete mp_m_axi_bresp_converter_0;
  delete mp_m_axi_bvalid_converter_0;
  delete mp_m_axi_bready_converter_0;
  delete mp_m_axi_araddr_converter_0;
  delete mp_m_axi_arlen_converter_0;
  delete mp_m_axi_arsize_converter_0;
  delete mp_m_axi_arburst_converter_0;
  delete mp_m_axi_arlock_converter_0;
  delete mp_m_axi_arcache_converter_0;
  delete mp_m_axi_arprot_converter_0;
  delete mp_m_axi_arregion_converter_0;
  delete mp_m_axi_arqos_converter_0;
  delete mp_m_axi_arvalid_converter_0;
  delete mp_m_axi_arready_converter_0;
  delete mp_m_axi_rdata_converter_0;
  delete mp_m_axi_rresp_converter_0;
  delete mp_m_axi_rlast_converter_0;
  delete mp_m_axi_rvalid_converter_0;
  delete mp_m_axi_rready_converter_0;

  delete mp_M01_AXI_transactor;
  delete mp_m_axi_awaddr_converter_1;
  delete mp_m_axi_awlen_converter_1;
  delete mp_m_axi_awsize_converter_1;
  delete mp_m_axi_awburst_converter_1;
  delete mp_m_axi_awlock_converter_1;
  delete mp_m_axi_awcache_converter_1;
  delete mp_m_axi_awprot_converter_1;
  delete mp_m_axi_awregion_converter_1;
  delete mp_m_axi_awqos_converter_1;
  delete mp_m_axi_awvalid_converter_1;
  delete mp_m_axi_awready_converter_1;
  delete mp_m_axi_wdata_converter_1;
  delete mp_m_axi_wstrb_converter_1;
  delete mp_m_axi_wlast_converter_1;
  delete mp_m_axi_wvalid_converter_1;
  delete mp_m_axi_wready_converter_1;
  delete mp_m_axi_bresp_converter_1;
  delete mp_m_axi_bvalid_converter_1;
  delete mp_m_axi_bready_converter_1;
  delete mp_m_axi_araddr_converter_1;
  delete mp_m_axi_arlen_converter_1;
  delete mp_m_axi_arsize_converter_1;
  delete mp_m_axi_arburst_converter_1;
  delete mp_m_axi_arlock_converter_1;
  delete mp_m_axi_arcache_converter_1;
  delete mp_m_axi_arprot_converter_1;
  delete mp_m_axi_arregion_converter_1;
  delete mp_m_axi_arqos_converter_1;
  delete mp_m_axi_arvalid_converter_1;
  delete mp_m_axi_arready_converter_1;
  delete mp_m_axi_rdata_converter_1;
  delete mp_m_axi_rresp_converter_1;
  delete mp_m_axi_rlast_converter_1;
  delete mp_m_axi_rvalid_converter_1;
  delete mp_m_axi_rready_converter_1;

  delete mp_m_axi_concat_araddr;
  delete mp_m_axi_concat_arburst;
  delete mp_m_axi_concat_arcache;
  delete mp_m_axi_concat_arlen;
  delete mp_m_axi_concat_arlock;
  delete mp_m_axi_concat_arprot;
  delete mp_m_axi_concat_arqos;
  delete mp_m_axi_concat_arregion;
  delete mp_m_axi_concat_arsize;
  delete mp_m_axi_concat_arvalid;
  delete mp_m_axi_concat_awaddr;
  delete mp_m_axi_concat_awburst;
  delete mp_m_axi_concat_awcache;
  delete mp_m_axi_concat_awlen;
  delete mp_m_axi_concat_awlock;
  delete mp_m_axi_concat_awprot;
  delete mp_m_axi_concat_awqos;
  delete mp_m_axi_concat_awregion;
  delete mp_m_axi_concat_awsize;
  delete mp_m_axi_concat_awvalid;
  delete mp_m_axi_concat_bready;
  delete mp_m_axi_concat_rready;
  delete mp_m_axi_concat_wdata;
  delete mp_m_axi_concat_wlast;
  delete mp_m_axi_concat_wstrb;
  delete mp_m_axi_concat_wvalid;
  delete mp_m_axi_split_arready;
  delete mp_m_axi_split_awready;
  delete mp_m_axi_split_bresp;
  delete mp_m_axi_split_bvalid;
  delete mp_m_axi_split_rdata;
  delete mp_m_axi_split_rlast;
  delete mp_m_axi_split_rresp;
  delete mp_m_axi_split_rvalid;
  delete mp_m_axi_split_wready;
}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(zynq_example_xbar_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(zynq_example_xbar_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(zynq_example_xbar_0);
SC_REGISTER_BV(64);
#endif

