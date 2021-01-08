//Compile with:
//g++ GODDESSAnalysis.cpp -std=c++0x `root-config --cflags --libs` -o GODDESSAnalysis

#define GODDESSAnalysis_cxx

#include "GODDESSAnalysis.h"

#include <string>
#include <iostream>
#include <array>
#include <vector>

int main() {
	std::cout << "\t****************************************************" << std::endl;
	std::cout << "\t*        Cool analysis code written by Chad        *" << std::endl;
	std::cout << "\t*Sorts the tree output by goddessSort (Josh Hooker)*" <<std::endl;
	std::cout << "\t*into interesting stuff like Ex and whatnot        *" << std::endl;
	std::cout << "\t****************************************************" << std::endl;
	std::cout <<"\nThe parameters in the Analysis.h file can be adjusted to suit the specifics (beam, target, etc.) of your experiment\n"<<std::endl;

	//Add the files
	TChain *chain = new TChain("data");
    TString PathToFiles = "/mnt/f/GODDESS_134Te/GRETINA_Data/out_josh/Run0";
    TString ExtraBit = "_combined.root";
    /*
    chain->Add(PathToFiles + "019" + ExtraBit);
    chain->Add(PathToFiles + "020" + ExtraBit);
    chain->Add(PathToFiles + "021" + ExtraBit);
    chain->Add(PathToFiles + "022" + ExtraBit);
    chain->Add(PathToFiles + "023" + ExtraBit);
    chain->Add(PathToFiles + "024" + ExtraBit);
    chain->Add(PathToFiles + "025" + ExtraBit);
    chain->Add(PathToFiles + "026" + ExtraBit);
    chain->Add(PathToFiles + "027" + ExtraBit);
    chain->Add(PathToFiles + "028" + ExtraBit);
    chain->Add(PathToFiles + "029" + ExtraBit);
    chain->Add(PathToFiles + "030" + ExtraBit);
    chain->Add(PathToFiles + "031" + ExtraBit);
    chain->Add(PathToFiles + "033" + ExtraBit);
    chain->Add(PathToFiles + "034" + ExtraBit);
    chain->Add(PathToFiles + "035" + ExtraBit);
    chain->Add(PathToFiles + "036" + ExtraBit);
    chain->Add(PathToFiles + "037" + ExtraBit);
    chain->Add(PathToFiles + "038" + ExtraBit);
    chain->Add(PathToFiles + "039" + ExtraBit);
    chain->Add(PathToFiles + "040" + ExtraBit);
    chain->Add(PathToFiles + "041" + ExtraBit);
    chain->Add(PathToFiles + "042" + ExtraBit);
    chain->Add(PathToFiles + "043" + ExtraBit);
    chain->Add(PathToFiles + "044" + ExtraBit);
    chain->Add(PathToFiles + "045" + ExtraBit);
    chain->Add(PathToFiles + "046" + ExtraBit);
    chain->Add(PathToFiles + "047" + ExtraBit);
    chain->Add(PathToFiles + "048" + ExtraBit);
    chain->Add(PathToFiles + "049" + ExtraBit);
    chain->Add(PathToFiles + "057" + ExtraBit);
    chain->Add(PathToFiles + "058" + ExtraBit);
    chain->Add(PathToFiles + "059" + ExtraBit);
    chain->Add(PathToFiles + "060" + ExtraBit);
    chain->Add(PathToFiles + "061" + ExtraBit);
    chain->Add(PathToFiles + "062" + ExtraBit);
    chain->Add(PathToFiles + "063" + ExtraBit);
    chain->Add(PathToFiles + "064" + ExtraBit);
    chain->Add(PathToFiles + "065" + ExtraBit);
    chain->Add(PathToFiles + "066" + ExtraBit);
    chain->Add(PathToFiles + "067" + ExtraBit);
    chain->Add(PathToFiles + "068" + ExtraBit);
    chain->Add(PathToFiles + "076" + ExtraBit);
    chain->Add(PathToFiles + "077" + ExtraBit);
    chain->Add(PathToFiles + "078" + ExtraBit);
    chain->Add(PathToFiles + "079" + ExtraBit);
    chain->Add(PathToFiles + "082" + ExtraBit);
    chain->Add(PathToFiles + "083" + ExtraBit);
    chain->Add(PathToFiles + "084" + ExtraBit);
    chain->Add(PathToFiles + "085" + ExtraBit);
    chain->Add(PathToFiles + "086" + ExtraBit);
    chain->Add(PathToFiles + "087" + ExtraBit);
    chain->Add(PathToFiles + "088" + ExtraBit);
    chain->Add(PathToFiles + "089" + ExtraBit);
    chain->Add(PathToFiles + "091" + ExtraBit);
    chain->Add(PathToFiles + "092" + ExtraBit);
    chain->Add(PathToFiles + "093" + ExtraBit);
    chain->Add(PathToFiles + "094" + ExtraBit);
    chain->Add(PathToFiles + "099" + ExtraBit);
    chain->Add(PathToFiles + "100" + ExtraBit);
    chain->Add(PathToFiles + "101" + ExtraBit);
    chain->Add(PathToFiles + "102" + ExtraBit);
    chain->Add(PathToFiles + "103" + ExtraBit);
    chain->Add(PathToFiles + "104" + ExtraBit);
    chain->Add(PathToFiles + "106" + ExtraBit);
    chain->Add(PathToFiles + "107" + ExtraBit);
    chain->Add(PathToFiles + "108" + ExtraBit);
    chain->Add(PathToFiles + "109" + ExtraBit);
    chain->Add(PathToFiles + "110" + ExtraBit);
    chain->Add(PathToFiles + "111" + ExtraBit);
    chain->Add(PathToFiles + "112" + ExtraBit);
    chain->Add(PathToFiles + "113" + ExtraBit);
    chain->Add(PathToFiles + "114" + ExtraBit);
    chain->Add(PathToFiles + "115" + ExtraBit);
    chain->Add(PathToFiles + "116" + ExtraBit);
    chain->Add(PathToFiles + "117" + ExtraBit);
    chain->Add(PathToFiles + "118" + ExtraBit);
    chain->Add(PathToFiles + "123" + ExtraBit);
    chain->Add(PathToFiles + "124" + ExtraBit);
    chain->Add(PathToFiles + "125" + ExtraBit);
    chain->Add(PathToFiles + "126" + ExtraBit);
    chain->Add(PathToFiles + "127" + ExtraBit);
    chain->Add(PathToFiles + "128" + ExtraBit);
    chain->Add(PathToFiles + "129" + ExtraBit);
    chain->Add(PathToFiles + "130" + ExtraBit);
    chain->Add(PathToFiles + "131" + ExtraBit);
    chain->Add(PathToFiles + "132" + ExtraBit);
    chain->Add(PathToFiles + "133" + ExtraBit);
    chain->Add(PathToFiles + "134" + ExtraBit);
    chain->Add(PathToFiles + "135" + ExtraBit);
    chain->Add(PathToFiles + "137" + ExtraBit);
    chain->Add(PathToFiles + "139" + ExtraBit);
    chain->Add(PathToFiles + "140" + ExtraBit);
    chain->Add(PathToFiles + "141" + ExtraBit);
    chain->Add(PathToFiles + "142" + ExtraBit);
    chain->Add(PathToFiles + "143" + ExtraBit);
    chain->Add(PathToFiles + "144" + ExtraBit);
    chain->Add(PathToFiles + "145" + ExtraBit);
    chain->Add(PathToFiles + "146" + ExtraBit);
    chain->Add(PathToFiles + "148" + ExtraBit);
    chain->Add(PathToFiles + "149" + ExtraBit);
    chain->Add(PathToFiles + "150" + ExtraBit);
    chain->Add(PathToFiles + "151" + ExtraBit);
    chain->Add(PathToFiles + "152" + ExtraBit);
    chain->Add(PathToFiles + "153" + ExtraBit);
    chain->Add(PathToFiles + "155" + ExtraBit);
    chain->Add(PathToFiles + "156" + ExtraBit);
    chain->Add(PathToFiles + "157" + ExtraBit);
    chain->Add(PathToFiles + "158" + ExtraBit);
    chain->Add(PathToFiles + "159" + ExtraBit);
    chain->Add(PathToFiles + "160" + ExtraBit);
    chain->Add(PathToFiles + "161" + ExtraBit);
    chain->Add(PathToFiles + "162" + ExtraBit);
    chain->Add(PathToFiles + "163" + ExtraBit);
    chain->Add(PathToFiles + "164" + ExtraBit);
    chain->Add(PathToFiles + "165" + ExtraBit);
    chain->Add(PathToFiles + "166" + ExtraBit);
    chain->Add(PathToFiles + "167" + ExtraBit);
    chain->Add(PathToFiles + "169" + ExtraBit);
    chain->Add(PathToFiles + "170" + ExtraBit);
    chain->Add(PathToFiles + "171" + ExtraBit);
    chain->Add(PathToFiles + "172" + ExtraBit);
    chain->Add(PathToFiles + "173" + ExtraBit);
    chain->Add(PathToFiles + "174" + ExtraBit);
    chain->Add(PathToFiles + "175" + ExtraBit);
    chain->Add(PathToFiles + "177" + ExtraBit);
    chain->Add(PathToFiles + "178" + ExtraBit);
    chain->Add(PathToFiles + "179" + ExtraBit);
    chain->Add(PathToFiles + "180" + ExtraBit);
    chain->Add(PathToFiles + "181" + ExtraBit);
    chain->Add(PathToFiles + "182" + ExtraBit);
    chain->Add(PathToFiles + "183" + ExtraBit);
    chain->Add(PathToFiles + "184" + ExtraBit);
    chain->Add(PathToFiles + "185" + ExtraBit);
    chain->Add(PathToFiles + "186" + ExtraBit);
    chain->Add(PathToFiles + "187" + ExtraBit);
    chain->Add(PathToFiles + "188" + ExtraBit);
    chain->Add(PathToFiles + "189" + ExtraBit);
    chain->Add(PathToFiles + "190" + ExtraBit);
    chain->Add(PathToFiles + "191" + ExtraBit);
    chain->Add(PathToFiles + "192" + ExtraBit);
    chain->Add(PathToFiles + "193" + ExtraBit);
    chain->Add(PathToFiles + "194" + ExtraBit);
    chain->Add(PathToFiles + "195" + ExtraBit);
    chain->Add(PathToFiles + "196" + ExtraBit);
    chain->Add(PathToFiles + "197" + ExtraBit);
    chain->Add(PathToFiles + "198" + ExtraBit);
    chain->Add(PathToFiles + "199" + ExtraBit);
    chain->Add(PathToFiles + "200" + ExtraBit);
    chain->Add(PathToFiles + "203" + ExtraBit);
    chain->Add(PathToFiles + "204" + ExtraBit);
    chain->Add(PathToFiles + "205" + ExtraBit);
    chain->Add(PathToFiles + "206" + ExtraBit);
    chain->Add(PathToFiles + "207" + ExtraBit);
    chain->Add(PathToFiles + "208" + ExtraBit);
    chain->Add(PathToFiles + "209" + ExtraBit);
    chain->Add(PathToFiles + "210" + ExtraBit);
    chain->Add(PathToFiles + "211" + ExtraBit);
    chain->Add(PathToFiles + "212" + ExtraBit);
    chain->Add(PathToFiles + "213" + ExtraBit);
    chain->Add(PathToFiles + "214" + ExtraBit);
    chain->Add(PathToFiles + "215" + ExtraBit);
    chain->Add(PathToFiles + "216" + ExtraBit);
    chain->Add(PathToFiles + "217" + ExtraBit);
    chain->Add(PathToFiles + "218" + ExtraBit);
    chain->Add(PathToFiles + "219" + ExtraBit);
    chain->Add(PathToFiles + "220" + ExtraBit);
    chain->Add(PathToFiles + "222" + ExtraBit);
    */
    chain->Add(PathToFiles + "223" + ExtraBit);
    /*
    chain->Add(PathToFiles + "224" + ExtraBit);
    chain->Add(PathToFiles + "225" + ExtraBit);
    chain->Add(PathToFiles + "226" + ExtraBit);
    chain->Add(PathToFiles + "227" + ExtraBit);
    chain->Add(PathToFiles + "228" + ExtraBit);
    chain->Add(PathToFiles + "229" + ExtraBit);
    chain->Add(PathToFiles + "230" + ExtraBit);
    chain->Add(PathToFiles + "231" + ExtraBit);
    chain->Add(PathToFiles + "232" + ExtraBit);
    chain->Add(PathToFiles + "234" + ExtraBit);
    chain->Add(PathToFiles + "235" + ExtraBit);
    chain->Add(PathToFiles + "236" + ExtraBit);
    chain->Add(PathToFiles + "237" + ExtraBit);
    chain->Add(PathToFiles + "238" + ExtraBit);
    chain->Add(PathToFiles + "239" + ExtraBit);
    chain->Add(PathToFiles + "240" + ExtraBit);
    chain->Add(PathToFiles + "241" + ExtraBit);
    chain->Add(PathToFiles + "242" + ExtraBit);
    chain->Add(PathToFiles + "243" + ExtraBit);
    chain->Add(PathToFiles + "244" + ExtraBit);
    chain->Add(PathToFiles + "245" + ExtraBit);
    chain->Add(PathToFiles + "246" + ExtraBit);
    chain->Add(PathToFiles + "247" + ExtraBit);
    chain->Add(PathToFiles + "248" + ExtraBit);
    chain->Add(PathToFiles + "249" + ExtraBit);
    chain->Add(PathToFiles + "250" + ExtraBit);
    chain->Add(PathToFiles + "251" + ExtraBit);
    chain->Add(PathToFiles + "252" + ExtraBit);
    chain->Add(PathToFiles + "253" + ExtraBit);
    chain->Add(PathToFiles + "254" + ExtraBit);
    chain->Add(PathToFiles + "255" + ExtraBit);
    chain->Add(PathToFiles + "258" + ExtraBit);
    chain->Add(PathToFiles + "259" + ExtraBit);
    chain->Add(PathToFiles + "260" + ExtraBit);
    chain->Add(PathToFiles + "261" + ExtraBit);
    chain->Add(PathToFiles + "262" + ExtraBit);
    chain->Add(PathToFiles + "263" + ExtraBit);
    chain->Add(PathToFiles + "264" + ExtraBit);
    chain->Add(PathToFiles + "266" + ExtraBit);
    chain->Add(PathToFiles + "268" + ExtraBit);
    chain->Add(PathToFiles + "269" + ExtraBit);
    chain->Add(PathToFiles + "270" + ExtraBit);
    chain->Add(PathToFiles + "271" + ExtraBit);
    chain->Add(PathToFiles + "272" + ExtraBit);
    chain->Add(PathToFiles + "273" + ExtraBit);
    chain->Add(PathToFiles + "274" + ExtraBit);
    chain->Add(PathToFiles + "276" + ExtraBit);
    chain->Add(PathToFiles + "277" + ExtraBit);
    chain->Add(PathToFiles + "278" + ExtraBit);
    chain->Add(PathToFiles + "279" + ExtraBit);
    chain->Add(PathToFiles + "280" + ExtraBit);
    chain->Add(PathToFiles + "281" + ExtraBit);
    chain->Add(PathToFiles + "282" + ExtraBit);
    chain->Add(PathToFiles + "283" + ExtraBit);
    chain->Add(PathToFiles + "284" + ExtraBit);
    chain->Add(PathToFiles + "285" + ExtraBit);
    chain->Add(PathToFiles + "286" + ExtraBit);
    chain->Add(PathToFiles + "287" + ExtraBit);
    chain->Add(PathToFiles + "288" + ExtraBit);
    chain->Add(PathToFiles + "289" + ExtraBit);
    chain->Add(PathToFiles + "290" + ExtraBit);
    chain->Add(PathToFiles + "291" + ExtraBit);
    chain->Add(PathToFiles + "292" + ExtraBit);
    chain->Add(PathToFiles + "293" + ExtraBit);
    chain->Add(PathToFiles + "294" + ExtraBit);
    chain->Add(PathToFiles + "295" + ExtraBit);
    chain->Add(PathToFiles + "296" + ExtraBit);
    chain->Add(PathToFiles + "298" + ExtraBit);
    chain->Add(PathToFiles + "299" + ExtraBit);
    chain->Add(PathToFiles + "300" + ExtraBit);
    chain->Add(PathToFiles + "301" + ExtraBit);
    chain->Add(PathToFiles + "302" + ExtraBit);
    chain->Add(PathToFiles + "304" + ExtraBit);
    chain->Add(PathToFiles + "306" + ExtraBit);
    chain->Add(PathToFiles + "307" + ExtraBit);
    chain->Add(PathToFiles + "308" + ExtraBit);
    chain->Add(PathToFiles + "309" + ExtraBit);
    chain->Add(PathToFiles + "310" + ExtraBit);
    chain->Add(PathToFiles + "311" + ExtraBit);
    chain->Add(PathToFiles + "312" + ExtraBit);
    chain->Add(PathToFiles + "313" + ExtraBit);
    chain->Add(PathToFiles + "314" + ExtraBit);
    chain->Add(PathToFiles + "315" + ExtraBit);
    chain->Add(PathToFiles + "316" + ExtraBit);
    chain->Add(PathToFiles + "317" + ExtraBit);
    chain->Add(PathToFiles + "318" + ExtraBit);
    chain->Add(PathToFiles + "319" + ExtraBit);
    chain->Add(PathToFiles + "320" + ExtraBit);
    chain->Add(PathToFiles + "321" + ExtraBit);
    chain->Add(PathToFiles + "322" + ExtraBit);
    chain->Add(PathToFiles + "323" + ExtraBit);
    chain->Add(PathToFiles + "324" + ExtraBit);
    chain->Add(PathToFiles + "325" + ExtraBit);
    chain->Add(PathToFiles + "326" + ExtraBit);
    chain->Add(PathToFiles + "327" + ExtraBit);
    chain->Add(PathToFiles + "329" + ExtraBit);
    chain->Add(PathToFiles + "330" + ExtraBit);
    chain->Add(PathToFiles + "331" + ExtraBit);
    chain->Add(PathToFiles + "333" + ExtraBit);
    chain->Add(PathToFiles + "334" + ExtraBit);
    chain->Add(PathToFiles + "336" + ExtraBit);
    chain->Add(PathToFiles + "337" + ExtraBit);
    chain->Add(PathToFiles + "338" + ExtraBit);
    chain->Add(PathToFiles + "339" + ExtraBit);
    chain->Add(PathToFiles + "340" + ExtraBit);
    chain->Add(PathToFiles + "341" + ExtraBit);
    chain->Add(PathToFiles + "342" + ExtraBit);
    chain->Add(PathToFiles + "344" + ExtraBit);
    chain->Add(PathToFiles + "345" + ExtraBit);
    chain->Add(PathToFiles + "346" + ExtraBit);
    chain->Add(PathToFiles + "347" + ExtraBit);
    chain->Add(PathToFiles + "348" + ExtraBit);
    chain->Add(PathToFiles + "349" + ExtraBit);
    chain->Add(PathToFiles + "350" + ExtraBit);
    chain->Add(PathToFiles + "351" + ExtraBit);
    chain->Add(PathToFiles + "352" + ExtraBit);
    chain->Add(PathToFiles + "353" + ExtraBit);
    chain->Add(PathToFiles + "355" + ExtraBit);
    chain->Add(PathToFiles + "357" + ExtraBit);
    chain->Add(PathToFiles + "358" + ExtraBit);
    chain->Add(PathToFiles + "359" + ExtraBit);
    chain->Add(PathToFiles + "362" + ExtraBit);
    chain->Add(PathToFiles + "363" + ExtraBit);
    chain->Add(PathToFiles + "364" + ExtraBit);
    chain->Add(PathToFiles + "365" + ExtraBit);
    chain->Add(PathToFiles + "367" + ExtraBit);
    chain->Add(PathToFiles + "368" + ExtraBit);
    chain->Add(PathToFiles + "369" + ExtraBit);
    chain->Add(PathToFiles + "370" + ExtraBit);
    chain->Add(PathToFiles + "371" + ExtraBit);
    chain->Add(PathToFiles + "372" + ExtraBit);
    chain->Add(PathToFiles + "374" + ExtraBit);
    chain->Add(PathToFiles + "375" + ExtraBit);
    chain->Add(PathToFiles + "376" + ExtraBit);
    chain->Add(PathToFiles + "377" + ExtraBit);
    chain->Add(PathToFiles + "379" + ExtraBit);
    chain->Add(PathToFiles + "380" + ExtraBit);
    chain->Add(PathToFiles + "381" + ExtraBit);
    chain->Add(PathToFiles + "382" + ExtraBit);
    chain->Add(PathToFiles + "383" + ExtraBit);
    chain->Add(PathToFiles + "384" + ExtraBit);
    chain->Add(PathToFiles + "386" + ExtraBit);
    chain->Add(PathToFiles + "387" + ExtraBit);
    */
    TFile* fc = new TFile("/mnt/f/GODDESS_134Te/GRETINA_Data/cuts.root","READ"); //IC cuts
    
    TTree *data = (TTree*)chain->GetTree();
	// List of branches
	TBranch        *b_BB10Mul;   //!
	TBranch        *b_BB10Det;   //!
	TBranch        *b_BB10Strip;   //!
	TBranch        *b_BB10Channel;   //!
	TBranch        *b_BB10ADC;   //!
	TBranch        *b_BB10Energy;   //!
	TBranch        *b_QQQ5Mul;   //!
	TBranch        *b_QQQ5Upstream;   //!
	TBranch        *b_QQQ5Det;   //!
	TBranch        *b_QQQ5Ring;   //!
	TBranch        *b_QQQ5RingChannel;   //!
	TBranch        *b_QQQ5Sector;   //!
	TBranch        *b_QQQ5SectorChannel;   //!
	TBranch        *b_QQQ5RingADC;   //!
	TBranch        *b_QQQ5RingEnergy;   //!
	TBranch        *b_QQQ5SectorADC;   //!
	TBranch        *b_QQQ5SectorEnergy;   //!
	TBranch        *b_QQQ5Angle;   //!
	TBranch        *b_SX3Mul;   //!
	TBranch        *b_SX3Upstream;   //!
	TBranch        *b_SX3Det;   //!
	TBranch        *b_SX3Sector;   //!
	TBranch        *b_SX3SectorChannel;   //!
	TBranch        *b_SX3SectorADC;   //!
	TBranch        *b_SX3SectorEnergy;   //!
	TBranch        *b_SX3Strip;   //!
	TBranch        *b_SX3StripLeftChannel;   //!
	TBranch        *b_SX3StripRightChannel;   //!
	TBranch        *b_SX3StripLeftADC;   //!
	TBranch        *b_SX3StripRightADC;   //!
	TBranch        *b_SX3StripEnergy;   //!
	TBranch        *b_icdE;   //!
	TBranch        *b_icE;   //!
	TBranch        *b_icWireX;   //!
	TBranch        *b_icWireY;   //!
	TBranch        *b_icPositionX;   //!
	TBranch        *b_icPositionY;   //!
	TBranch        *b_icPositionWeightedX;   //!
	TBranch        *b_icPositionWeightedY;   //!
	TBranch        *b_tdcIC;   //!
	TBranch        *b_tdcGRETINA;   //!
	TBranch        *b_tdcRF;   //!
	TBranch        *b_tdcSilicon;   //!
	TBranch        *b_timeStamp;   //!
	TBranch			*b_GRETINATimeStamp;
	TBranch			*b_foundGRETINA;
	TBranch			*b_xtalsMul;
	TBranch			*b_xtals_xlab;
	TBranch			*b_xtals_ylab;
	TBranch			*b_xtals_zlab;
	TBranch			*b_xtals_cc;
	TBranch			*b_xtals_edop;
	TBranch			*b_xtals_edopMaxInt;
	TBranch			*b_xtals_edopSeg;
	TBranch			*b_xtals_edopXtal;
	TBranch			*b_xtals_crystalNum;
	TBranch			*b_xtals_quadNum;
	TBranch			*b_xtals_t0;
	TBranch			*b_xtals_timestamp;
	chain->SetBranchAddress("BB10Mul", &BB10Mul, &b_BB10Mul);
	chain->SetBranchAddress("BB10Det", BB10Det, &b_BB10Det);
	chain->SetBranchAddress("BB10Strip", BB10Strip, &b_BB10Strip);
	chain->SetBranchAddress("BB10Channel", BB10Channel, &b_BB10Channel);
	chain->SetBranchAddress("BB10ADC", BB10ADC, &b_BB10ADC);
	chain->SetBranchAddress("BB10Energy", BB10Energy, &b_BB10Energy);
	chain->SetBranchAddress("QQQ5Mul", &QQQ5Mul, &b_QQQ5Mul);
	chain->SetBranchAddress("QQQ5Upstream", QQQ5Upstream, &b_QQQ5Upstream);
	chain->SetBranchAddress("QQQ5Det", QQQ5Det, &b_QQQ5Det);
	chain->SetBranchAddress("QQQ5Ring", QQQ5Ring, &b_QQQ5Ring);
	chain->SetBranchAddress("QQQ5RingChannel", QQQ5RingChannel, &b_QQQ5RingChannel);
	chain->SetBranchAddress("QQQ5Sector", QQQ5Sector, &b_QQQ5Sector);
	chain->SetBranchAddress("QQQ5SectorChannel", QQQ5SectorChannel, &b_QQQ5SectorChannel);
	chain->SetBranchAddress("QQQ5RingADC", QQQ5RingADC, &b_QQQ5RingADC);
	chain->SetBranchAddress("QQQ5RingEnergy", QQQ5RingEnergy, &b_QQQ5RingEnergy);
	chain->SetBranchAddress("QQQ5SectorADC", QQQ5SectorADC, &b_QQQ5SectorADC);
	chain->SetBranchAddress("QQQ5SectorEnergy", QQQ5SectorEnergy, &b_QQQ5SectorEnergy);
	chain->SetBranchAddress("QQQ5Angle", QQQ5Angle, &b_QQQ5Angle);
	chain->SetBranchAddress("SX3Mul", &SX3Mul, &b_SX3Mul);
	chain->SetBranchAddress("SX3Upstream", SX3Upstream, &b_SX3Upstream);
	chain->SetBranchAddress("SX3Det", SX3Det, &b_SX3Det);
	chain->SetBranchAddress("SX3Sector", SX3Sector, &b_SX3Sector);
	chain->SetBranchAddress("SX3SectorChannel", SX3SectorChannel, &b_SX3SectorChannel);
	chain->SetBranchAddress("SX3SectorADC", SX3SectorADC, &b_SX3SectorADC);
	chain->SetBranchAddress("SX3SectorEnergy", SX3SectorEnergy, &b_SX3SectorEnergy);
	chain->SetBranchAddress("SX3Strip", SX3Strip, &b_SX3Strip);
	chain->SetBranchAddress("SX3StripLeftChannel", SX3StripLeftChannel, &b_SX3StripLeftChannel);
	chain->SetBranchAddress("SX3StripRightChannel", SX3StripRightChannel, &b_SX3StripRightChannel);
	chain->SetBranchAddress("SX3StripLeftADC", SX3StripLeftADC, &b_SX3StripLeftADC);
	chain->SetBranchAddress("SX3StripRightADC", SX3StripRightADC, &b_SX3StripRightADC);
	chain->SetBranchAddress("SX3StripEnergy", SX3StripEnergy, &b_SX3StripEnergy);
	chain->SetBranchAddress("icdE", &icdE, &b_icdE);
	chain->SetBranchAddress("icE", &icE, &b_icE);
	chain->SetBranchAddress("icWireX", &icWireX, &b_icWireX);
	chain->SetBranchAddress("icWireY", &icWireY, &b_icWireY);
	chain->SetBranchAddress("icPositionX", &icPositionX, &b_icPositionX);
	chain->SetBranchAddress("icPositionY", &icPositionY, &b_icPositionY);
	chain->SetBranchAddress("icPositionWeightedX", &icPositionWeightedX, &b_icPositionWeightedX);
	chain->SetBranchAddress("icPositionWeightedY", &icPositionWeightedY, &b_icPositionWeightedY);
	chain->SetBranchAddress("tdcIC", &tdcIC, &b_tdcIC);
	chain->SetBranchAddress("tdcGRETINA", &tdcGRETINA, &b_tdcGRETINA);
	chain->SetBranchAddress("tdcRF", &tdcRF, &b_tdcRF);
	chain->SetBranchAddress("tdcSilicon", &tdcSilicon, &b_tdcSilicon);
	chain->SetBranchAddress("timeStamp", &timeStamp, &b_timeStamp);
	chain->SetBranchAddress("GRETINATimeStamp", &GRETINATimeStamp, &b_GRETINATimeStamp);
	chain->SetBranchAddress("foundGRETINA", &foundGRETINA, &b_foundGRETINA);
	chain->SetBranchAddress("xtalsMul", &xtalsMul, &b_xtalsMul);
	chain->SetBranchAddress("xtals_xlab", &xtals_xlab, &b_xtals_xlab);
	chain->SetBranchAddress("xtals_ylab", &xtals_ylab, &b_xtals_ylab);
	chain->SetBranchAddress("xtals_zlab", &xtals_zlab, &b_xtals_zlab);
	chain->SetBranchAddress("xtals_cc", &xtals_cc, &b_xtals_cc);
	chain->SetBranchAddress("xtals_edop", &xtals_edop, &b_xtals_edop);
	chain->SetBranchAddress("xtals_edopMaxInt", &xtals_edopMaxInt, &b_xtals_edopMaxInt);
	chain->SetBranchAddress("xtals_edopSeg", &xtals_edopSeg, &b_xtals_edopSeg);
	chain->SetBranchAddress("xtals_edopXtal", &xtals_edopXtal, &b_xtals_edopXtal);
	chain->SetBranchAddress("xtals_crystalNum", &xtals_crystalNum, &b_xtals_crystalNum);
	chain->SetBranchAddress("xtals_quadNum", &xtals_quadNum, &b_xtals_quadNum);
	chain->SetBranchAddress("xtals_t0", &xtals_t0, &b_xtals_t0);
	chain->SetBranchAddress("xtals_timestamp", &xtals_timestamp, &b_xtals_timestamp);
    
    //Create the output file and tree
    fout = new TFile("/mnt/f/GODDESS_134Te/GRETINA_Data/out_josh/everything.root", "RECREATE");
    tree = new TTree("tree","134Te(d,pg)135Te Experiment with GODDESS");
    tree->Branch("TDC_IC", &TDC_IC, "TDC_IC/F");
    tree->Branch("TDC_GRETINA", &TDC_GRETINA, "TDC_GRETINA/F");
    tree->Branch("TDC_RF", &TDC_RF, "TDC_RF/F");
    tree->Branch("TDC_Si", &TDC_Si, "TDC_Si/F");
    tree->Branch("IC_dE", &IC_dE, "IC_dE/F");
    tree->Branch("IC_Eres", &IC_Eres, "IC_Eres/F");
    tree->Branch("IC_x", &IC_x, "IC_x/I");
    tree->Branch("IC_y", &IC_y, "IC_y/I");
    tree->Branch("IC_PID", &IC_PID, "IC_PID/B");
    tree->Branch("uQQQ5_Angle", &uQQQ5_Angle, "uQQQ5_Angle[128]/F");
    tree->Branch("uQQQ5_Energy", &uQQQ5_Energy, "uQQQ5_Energy[128]/F");
    tree->Branch("dQQQ5_dE", &dQQQ5_dE, "dQQQ5_dE[128]/F");
    tree->Branch("dQQQ5_E1", &dQQQ5_E1, "dQQQ5_E1[128]/F");
    tree->Branch("dQQQ5_E2", &dQQQ5_E2, "dQQQ5_E2[128]/F");
    tree->Branch("dQQQ5_Angle", &dQQQ5_Angle, "dQQQ5_Angle[128]/F");
    tree->Branch("dQQQ5_Energy", &dQQQ5_Energy, "dQQQ5_Energy/F");
    tree->Branch("uSX3_Angle", &uSX3_Angle, "uSX3_Angle[128]/F");
    tree->Branch("uSX3_Energy", &uSX3_Energy, "uSX3_Energy[128]/F");
    tree->Branch("dSX3_Angle", &dSX3_Angle, "dSX3_Angle[128]/F");
    tree->Branch("dSX3_Energy", &dSX3_Energy, "dSX3_Energy[128]/F");
	tree->Branch("BB10_Energy", &BB10_Energy, "BB10_Energy[128]/F");
	tree->Branch("Si_PID", &Si_PID, "Si_PID/B");
    tree->Branch("Si_Angle", &Si_Angle);
    tree->Branch("Si_Energy", &Si_Energy);
    tree->Branch("Ex", &Ex);
    tree->Branch("Egamma", &Egamma, "Egamma[128]/F");
    
    // Load calibration parameters
    std::ifstream uQQQ5bEnCal_file;
    uQQQ5bEnCal_file.open("cal_files/uQQQ5bEnCal.dat");
    for(Int_t i=0; i<16; i++) {
    	uQQQ5bEnCal_file >> uQQQ5bEnCal_slope[i/4][i%4] >> uQQQ5bEnCal_offset[i/4][i%4];
    }
    
    std::ifstream uQQQ5fEnCal_file;
    uQQQ5fEnCal_file.open("cal_files/uQQQ5fEnCal.dat");
    for(Int_t i=0; i<128; i++) {
    	uQQQ5fEnCal_file >> uQQQ5fEnCal_slope[i/32][i%32] >> uQQQ5fEnCal_offset[i/32][i%32];
    }
    
    std::ifstream dQQQ5bEnCal_file;
    dQQQ5bEnCal_file.open("cal_files/dQQQ5bEnCal.dat");
    for(Int_t i=0; i<12; i++) {
    	dQQQ5bEnCal_file >> dQQQ5bEnCal_slope[i/4][i%4] >> dQQQ5bEnCal_offset[i/4][i%4];
    }
    
    std::ifstream dQQQ5fEnCal_file;
    dQQQ5fEnCal_file.open("cal_files/dQQQ5fEnCal.dat");
    for(Int_t i=0; i<96; i++) {
    	dQQQ5fEnCal_file >> dQQQ5fEnCal_slope[i/32][i%32] >> dQQQ5fEnCal_offset[i/32][i%32];
    }
    
    std::ifstream BB10EnCal_file;
    BB10EnCal_file.open("cal_files/BB10EnCal.dat");
    for(Int_t i=0; i<64; i++) { //Remember that the first BB10 detector is in position 1
    	BB10EnCal_file >> BB10EnCal_slope[i/8][i%8] >> BB10EnCal_offset[i/8][i%8];
    }
    
    std::ifstream uSX3bPedestals_file, dSX3bPedestals_file, uSX3fPedestals_file, dSX3fPedestals_file, uSX3fGains_file, dSX3fGains_file, uSX3fPosCal_file, dSX3fPosCal_file;
    uSX3bPedestals_file.open("cal_files/uSX3bPedestals.dat");
    dSX3bPedestals_file.open("cal_files/dSX3bPedestals.dat");
    uSX3fPedestals_file.open("cal_files/uSX3fPedestals.dat");
    dSX3fPedestals_file.open("cal_files/dSX3fPedestals.dat");
    uSX3fGains_file.open("cal_files/uSX3fGains.dat");
    dSX3fGains_file.open("cal_files/dSX3fGains.dat");
    uSX3fPosCal_file.open("cal_files/uSX3fPosCal.dat");
    dSX3fPosCal_file.open("cal_files/dSX3fPosCal.dat");
    for(Int_t i=0; i<48; i++) {
    	uSX3bPedestals_file >> uSX3bPedestals[i/4][i%4];
    	dSX3bPedestals_file >> dSX3bPedestals[i/4][i%4];
    	uSX3fPedestals_file >> uSX3fPedestals_left[i/4][i%4] >> uSX3fPedestals_right[i/4][i%4];
    	dSX3fPedestals_file >> dSX3fPedestals_left[i/4][i%4] >> dSX3fPedestals_right[i/4][i%4];
    	uSX3fGains_file >> uSX3fGains[i/4][i%4];
    	dSX3fGains_file >> dSX3fGains[i/4][i%4];
    	uSX3fPosCal_file >> uSX3fPosCal_left[i/4][i%4] >> uSX3fPosCal_right[i/4][i%4];
    	dSX3fPosCal_file >> dSX3fPosCal_left[i/4][i%4] >> dSX3fPosCal_right[i/4][i%4];
    }

    std::ifstream uSX3bEnCal_file, dSX3bEnCal_file, uSX3fEnCal_file, dSX3fEnCal_file;
    uSX3bEnCal_file.open("cal_files/uSX3bEnCal.dat");
    dSX3bEnCal_file.open("cal_files/dSX3bEnCal.dat");
    uSX3fEnCal_file.open("cal_files/uSX3fEnCal.dat");
    dSX3fEnCal_file.open("cal_files/dSX3fEnCal.dat");
    for(Int_t i=0; i<192; i++) {
    	uSX3bEnCal_file >> uSX3bEnCal_slope[i/16][(i%4)/4][i%16] >> uSX3bEnCal_offset[i/16][(i%4)/4][i%16];
    	dSX3bEnCal_file >> dSX3bEnCal_slope[i/16][(i%4)/4][i%16] >> dSX3bEnCal_offset[i/16][(i%4)/4][i%16];
    	uSX3fEnCal_file >> uSX3fEnCal_slope[i/16][(i%4)/4][i%16] >> uSX3fEnCal_offset[i/16][(i%4)/4][i%16];
    	dSX3fEnCal_file >> dSX3fEnCal_slope[i/16][(i%4)/4][i%16] >> dSX3fEnCal_offset[i/16][(i%4)/4][i%16];
    }
    
    Long64_t nentries = chain->GetEntries();
    
    //Loop over all the events
    for (Long64_t jentry=0; jentry<nentries; jentry++) {
    	current = chain->GetEntry(jentry);
		
		// Get run number for TCutG and whatever else
    	std::string fileName = chain->GetCurrentFile()->GetName();
    	fileName.erase(fileName.begin(), fileName.end() - 17);
    	fileName.erase(fileName.end() - 14, fileName.end());
    	TString runNumberStr = fileName;
    	int runNumber = std::stoi(fileName);
    	if(runNumber!=prevRunNumber) {
    		prevRunNumber = runNumber;
    		std::cout << "Sorting Run #" << runNumberStr <<std::endl;
    		std::cout<<"Entry " << jentry << " of " << nentries << ", " << 100 * jentry/nentries << "% complete" << "\r\n" << std::flush;
    	}
    	
    	//Load IC cuts
    	char cutname[128];
    	sprintf(cutname,"cut%i",runNumber);
    	TCutG* IC_cut;
		fc->GetObject(cutname, IC_cut);
    	
    	//Reset tree variables
    	TDC_IC = TDC_GRETINA = TDC_RF = TDC_Si = IC_dE = IC_Eres = NAN;
    	dQQQ5_Energy = 0;
    	IC_x = IC_y = 0;
    	IC_PID = false;
    	Si_PID = true;
    	
    	for(int i=0; i<128; i++){
    		uQQQ5_Angle[i] = uQQQ5_Energy[i] = dQQQ5_Angle[i] = dQQQ5_dE[i] = dQQQ5_E1[i] = dQQQ5_E2[i] = uSX3_Angle[i] = uSX3_Energy[i] = dSX3_Angle[i] = dSX3_Energy[i] = BB10_Energy[i] = Egamma[i]= NAN;
    	}
    	
    	Si_Energy.clear();
    	Si_Angle.clear();
    	Ex.clear();
    	
    	//IC and TDC branches are simple
    	TDC_IC = tdcIC;
    	TDC_GRETINA = tdcGRETINA;
    	TDC_RF = tdcRF;
    	TDC_Si = tdcSilicon;
    	IC_dE = icdE;
    	IC_Eres = icE;
    	IC_x = icWireX;
    	IC_y = icWireY;
    	
    	if(IC_cut->IsInside(IC_Eres,IC_dE)) IC_PID=true;
    	
    	//Reset intermediate variables
    	dQQQ5_dE_Angle_sum = dQQQ5_E1_Angle_sum = dQQQ5_E2_Angle_sum = 0;
    	dQQQ5_dE_hit = dQQQ5_E1_hit = dQQQ5_E2_hit = 0;
    	
    	//QQQ5
    	//Loop over multiplicity
    	for(Int_t j=0; j<QQQ5Mul; j++){
			
			//Reset intermediate variables
			uQQQ5f_Energy = uQQQ5b_Energy = dQQQ5f_Energy = dQQQ5b_Energy = E3 = p3 = NAN;
    	
    		if(QQQ5Upstream[j]) {
    			
    			//Apply calibration to the hit
    			uQQQ5b_Energy = QQQ5SectorADC[j]*uQQQ5bEnCal_slope[QQQ5Det[j]][QQQ5Sector[j]] + uQQQ5bEnCal_offset[QQQ5Det[j]][QQQ5Sector[j]];
    			uQQQ5f_Energy = QQQ5RingADC[j]*uQQQ5fEnCal_slope[QQQ5Det[j]][QQQ5Ring[j]] + uQQQ5fEnCal_offset[QQQ5Det[j]][QQQ5Ring[j]];
    			
    			//Compare front and backside energies. They should be close. If not, throw it out
    			if(uQQQ5f_Energy > 0 || uQQQ5b_Energy > 0) { //&& uQQQ5f_Energy/uQQQ5b_Energy > 0.9 && uQQQ5f_Energy/uQQQ5b_Energy < 1.1) {
    			    uQQQ5_Angle[j] = QQQ5Angle[j];
    				
    				//Use the frontside energy unless it's too small
    				if(uQQQ5f_Energy < 1000.0 && uQQQ5b_Energy > uQQQ5f_Energy) {
    					uQQQ5_Energy[j] = uQQQ5b_Energy;
    				}
    				else {
    					uQQQ5_Energy[j] = uQQQ5f_Energy;
    				}
    				
    				Si_Angle.push_back(uQQQ5_Angle[j]);
    				
    				Si_Energy.push_back(uQQQ5_Energy[j]);
    						
    				E3 = Si_Energy.at(Si_Energy.size()-1)+m3;
    				p3 = TMath::Sqrt(E3*E3-m3*m3);
    				
    				Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
    			}
    			
    		}
    		
    		//Downstream QQQ5s. Currently sorta buggy.
    		else if(!QQQ5Upstream[j]) {
    			//Apply calibration to the hit
    			dQQQ5b_Energy = QQQ5SectorADC[j]*dQQQ5bEnCal_slope[QQQ5Det[j]][QQQ5Sector[j]] + dQQQ5bEnCal_offset[QQQ5Det[j]][QQQ5Sector[j]];
    			dQQQ5f_Energy = QQQ5RingADC[j]*dQQQ5fEnCal_slope[QQQ5Det[j]][QQQ5Ring[j]] + dQQQ5fEnCal_offset[QQQ5Det[j]][QQQ5Ring[j]];
    			
    			//Compare front and backside energies. They should be close. If not, throw it out
    			if(dQQQ5f_Energy > 0 || dQQQ5b_Energy > 0) {// && dQQQ5f_Energy/dQQQ5b_Energy > 0.9 && dQQQ5f_Energy/dQQQ5b_Energy < 1.1) {
 
 					dQQQ5_Angle[j] = QQQ5Angle[j];
    				
    				//Use the frontside energy unless it's too small
    				if(dQQQ5f_Energy < 1000.0 && dQQQ5b_Energy > dQQQ5f_Energy) {
    					if(QQQ5Det[j]==0) {
    						if(dQQQ5_Angle[j]>0) {
    							dQQQ5_dE_hit++; //The dE detector seems to be second best for getting the angle.
    							dQQQ5_dE_Angle_sum += dQQQ5_Angle[j];
    						}
    						dQQQ5_dE[j] = dQQQ5b_Energy;
    					}
    					else if(QQQ5Det[j]==1) {
    						if(dQQQ5_Angle[j]>0){
    							dQQQ5_E1_hit++; //The E1 detector seems to be the best for getting the angle.
    							dQQQ5_E1_Angle_sum += dQQQ5_Angle[j];
    						}
    						dQQQ5_E1[j] = dQQQ5b_Energy;
    					}
    					else if(QQQ5Det[j]==2) {
    						if(dQQQ5_Angle[j]>0){
    							dQQQ5_E2_hit++; //Last resort
    							dQQQ5_E2_Angle_sum += dQQQ5_Angle[j];
    						}
    						dQQQ5_E2[j] = dQQQ5b_Energy;
    					}
    					dQQQ5_Energy += dQQQ5b_Energy;
    				}
    				else {
    					if(QQQ5Det[j]==0) {
    						if(dQQQ5_Angle[j]>0){
    							dQQQ5_dE_hit++;
    							dQQQ5_dE_Angle_sum += dQQQ5_Angle[j];
    						}
    						dQQQ5_dE[j] = dQQQ5f_Energy;
    					}
    					else if(QQQ5Det[j]==1) {
    						if(dQQQ5_Angle[j]>0){
    							dQQQ5_E1_hit++;
    							dQQQ5_E1_Angle_sum += dQQQ5_Angle[j];
    						}
    						dQQQ5_E1[j] = dQQQ5f_Energy;
    					}
    					else if(QQQ5Det[j]==2) {
    						if(dQQQ5_Angle[j]>0){
    							dQQQ5_E2_hit++;
    							dQQQ5_E2_Angle_sum += dQQQ5_Angle[j];
    						}
    						dQQQ5_E2[j]= dQQQ5f_Energy;
    					}
    					dQQQ5_Energy += dQQQ5f_Energy;
    				}
    			}
    		}
    	}

    	if(dQQQ5_E1_hit>0) {//Use the E1 detector for angles first, if available
    		Si_Angle.push_back(dQQQ5_E1_Angle_sum/dQQQ5_E1_hit);
    		Si_Energy.push_back(dQQQ5_Energy);
    		E3 = Si_Energy.at(Si_Energy.size()-1)+m3;
    		p3 = TMath::Sqrt(E3*E3-m3*m3);
    		Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
    	}
    	else if(dQQQ5_dE_hit>0) {
    		Si_Angle.push_back(dQQQ5_dE_Angle_sum/dQQQ5_dE_hit);
    		Si_Energy.push_back(dQQQ5_Energy);
    		E3 = Si_Energy.at(Si_Energy.size()-1)+m3;
    		p3 = TMath::Sqrt(E3*E3-m3*m3);
    		Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
    	}
    	else if(dQQQ5_E2_hit>0) {
    		Si_Angle.push_back(dQQQ5_E2_Angle_sum/dQQQ5_E2_hit);
    		Si_Energy.push_back(dQQQ5_Energy);
    		E3 = Si_Energy.at(Si_Energy.size()-1)+m3;
    		p3 = TMath::Sqrt(E3*E3-m3*m3);
    		Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
    	}
    	
    	//SX3 Time
    	//Loop over multiplicity
    	if(SX3Mul>128) SX3Mul = 128;
    	for(Int_t j=0; j<SX3Mul; j++){
			
			//Reset intermediate variables
			uSX3f_L = uSX3f_R = uSX3b_Energy = uSX3f_Energy = uSX3f_Position = dSX3f_L = dSX3f_R = dSX3b_Energy = dSX3f_Energy = dSX3f_Position = telescope_energy = E3 = p3 = NAN;
    	
    		if(SX3Upstream[j]) {
				
				//Subtract pedestals and apply gains to front contacts.
				uSX3f_L = SX3StripLeftADC[j] - uSX3fPedestals_left[SX3Det[j]][SX3Strip[j]];
				uSX3f_R = -1.*(SX3StripRightADC[j] - uSX3fPedestals_right[SX3Det[j]][SX3Strip[j]])*uSX3fGains[SX3Det[j]][SX3Strip[j]];
				
				//Energy calibrate back
				uSX3b_Energy = (SX3SectorADC[j] - uSX3bPedestals[SX3Det[j]][SX3Sector[j]])*uSX3bEnCal_slope[SX3Det[j]][SX3Strip[j]][SX3Sector[j]];
			
				//Energy calibrate front
				uSX3f_Energy = (uSX3f_L + uSX3f_R)* uSX3fEnCal_slope[SX3Det[j]][SX3Strip[j]][SX3Sector[j]] + uSX3fEnCal_offset[SX3Det[j]][SX3Strip[j]][SX3Sector[j]];
				
				//Position calibration
				uSX3f_Position = (((uSX3f_R - uSX3f_L)/uSX3f_Energy - uSX3fPosCal_left[SX3Det[j]][SX3Strip[j]])/(uSX3fPosCal_right[SX3Det[j]][SX3Strip[j]] - uSX3fPosCal_left[SX3Det[j]][SX3Strip[j]]))*75.; //Position Calibration applied
				
				//Calculations for x and y position.
				//Wrote them all out but turns out I don't actually need right now.
				//uSX3f_PosX = barrel_radius*TMath::Sin(SX3Det[j]*30.*TMath::Pi()/180. + TMath::ATan(((SX3Strip[j]-2)*10.+5.)/barrel_radius)); //Detectors arranged every 30 degrees, each strip is 10 mm wide (5 mm half width)
				//uSX3f_PosY = barrel_radius*TMath::Cos(SX3Det[j]*30.*TMath::Pi()/180. + TMath::ATan(((SX3Strip[j]-2)*10.+5.)/barrel_radius));
				
				//Check if the energies look reasonable
				if(uSX3f_Energy > 0 || uSX3b_Energy > 0) {// && uSX3f_Energy/uSX3b_Energy > 0.9 && uSX3f_Energy/uSX3b_Energy < 1.1) {
				
					//Calculate theta from the position on the front strip
					uSX3_Angle[j] = 180. - TMath::ATan(98./uSX3f_Position)*180./TMath::Pi();
					if(uSX3_Angle[j]==180) uSX3_Angle[j]=NAN;
					
					//Use the backside energy unless it's too small
    				if(uSX3b_Energy < 1000.0 && uSX3f_Energy > uSX3b_Energy) {
    					uSX3_Energy[j] = uSX3f_Energy;
    				}
    				else {
    					uSX3_Energy[j] = uSX3b_Energy;
    				}
    				
    				Si_Angle.push_back(uSX3_Angle[j]);
    				Si_Energy.push_back(uSX3_Energy[j]);
    				
    				E3 = Si_Energy.at(Si_Energy.size()-1)+m3;
    				p3 = TMath::Sqrt(E3*E3-m3*m3);
    				Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
				}
    		
    		}
    		else if(!SX3Upstream[j]) {
    			//Subtract pedestals and apply gains to front contacts.
				dSX3f_L = SX3StripLeftADC[j] - dSX3fPedestals_left[SX3Det[j]][SX3Strip[j]];
				dSX3f_R = -1.*(SX3StripRightADC[j] - dSX3fPedestals_right[SX3Det[j]][SX3Strip[j]])*dSX3fGains[SX3Det[j]][SX3Strip[j]];
				
				//Energy calibrate back
				dSX3b_Energy = (SX3SectorADC[j] - dSX3bPedestals[SX3Det[j]][SX3Sector[j]])*dSX3bEnCal_slope[SX3Det[j]][SX3Strip[j]][SX3Sector[j]];
			
				//Energy calibrate front
				dSX3f_Energy = (dSX3f_L + dSX3f_R)* dSX3fEnCal_slope[SX3Det[j]][SX3Strip[j]][SX3Sector[j]] + dSX3fEnCal_offset[SX3Det[j]][SX3Strip[j]][SX3Sector[j]];
				
				//Position calibration
				dSX3f_Position = (((dSX3f_R - dSX3f_L)/dSX3f_Energy - dSX3fPosCal_left[SX3Det[j]][SX3Strip[j]])/(dSX3fPosCal_right[SX3Det[j]][SX3Strip[j]] - dSX3fPosCal_left[SX3Det[j]][SX3Strip[j]]))*75.; //Position Calibration applied
				
				//Check if the energies look reasonable
				if(dSX3f_Energy > 0 || dSX3b_Energy > 0) {// && dSX3f_Energy/dSX3b_Energy > 0.9 && dSX3f_Energy/dSX3b_Energy < 1.1) {
				
					//Calculate theta from the position on the front strip
					dSX3_Angle[j] = TMath::ATan(98./dSX3f_Position)*180./TMath::Pi();
					if(dSX3_Angle[j]<0) dSX3_Angle[j] = -1*dSX3_Angle[j];
					
					//Use the backside energy unless it's too small
    				if(dSX3b_Energy < 1000.0 && dSX3f_Energy > dSX3b_Energy) {
    					dSX3_Energy[j] = dSX3f_Energy;
    				}
    				else {
    					dSX3_Energy[j] = dSX3b_Energy;
    				}
    				
    				if(SX3Det[j]>0 && SX3Det[j]<9) { //These dets have BB10s in front of them
    					telescope_energy = dSX3_Energy[j];
    					for(int k=0; k<BB10Mul; k++) {
    						BB10_Energy[k] = BB10ADC[k]*BB10EnCal_slope[BB10Det[k]-1][BB10Strip[k]] + BB10EnCal_offset[BB10Det[k]-1][BB10Strip[k]];
    						if(BB10Det[k]==SX3Det[j]) {
    							telescope_energy+=BB10_Energy[k];
    						}
    					}
    					Si_Angle.push_back(dSX3_Angle[j]);
						Si_Energy.push_back(telescope_energy);
						E3 = Si_Energy.at(Si_Energy.size()-1)+m3;
						p3 = TMath::Sqrt(E3*E3-m3*m3);
						Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
    				}
    				else {
    					Si_Angle.push_back(dSX3_Angle[j]);
    					Si_Energy.push_back(dSX3_Energy[j]);
						p3 = TMath::Sqrt(E3*E3-m3*m3);
						Ex.push_back(TMath::Sqrt(m1*m1 + m2*m2 + 2.*E1*m2 + m3*m3 - 2*(E3*(E1+m2) - p1*p3*TMath::Cos(Si_Angle.at(Si_Angle.size()-1)*TMath::Pi()/180.))) - m4);
    				}
    			}
    		}
    	}
    	
    	//Stop. Gamma time.
    	for(Int_t j=0; j<xtalsMul; j++){
    		if(xtals_edop[j]>0) Egamma[j] = xtals_edop[j];
    	}
    	
    	tree->Fill();
    	
    	if(jentry%100000 == 0) {
    		std::cout<<"Entry " << jentry << " of " << nentries << ", " << 100 * jentry/nentries << "% complete" << "\r\n" << std::flush;
    	}
    }
    
	std::cout << "Entry " << nentries << " of " << nentries << ", 100% Complete!"<<std::endl;
	fout->Write();
	fout->Close();
    
}
