//
//  ClusterSelector.h
//  
//
//  Created by Brian L Dorney on 28/01/16.
//
//

#ifndef ____ClusterSelector__
#define ____ClusterSelector__

//C++ Includes
#include <stdio.h>
#include <string>

//Framework Includes
#include "DetectorMPGD.h"
#include "Selector.h"
#include "TimingUtilityFunctions.h"
#include "UniformityUtilityTypes.h"

//ROOT Includes
#include "TFile.h"
#include "TROOT.h"
#include "TTree.h"

namespace Uniformity {
    class ClusterSelector : public Selector {
        
    public:
        //Constructors
        //------------------------------------------------------------------------------------------------------------------------------------------
        //Default
        ClusterSelector();
        
        //Actions - Methods that Do Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        
        //Getters - Methods that Get (i.e. Return) Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        
        //Printers - Methods that Print Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        
        //Setters - Methods that Set Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        //Given an output ROOT file from amoreSRS with clusters
        //Applies the cluster selection and stores those selected clusters in inputDet
        virtual void setClusters(std::string &strInputRootFileName, Uniformity::DetectorMPGD &inputDet);
        
        //As above but overwrites the stored AnalysisSetupUniformity object
        virtual void setClusters(std::string &strInputRootFileName, Uniformity::DetectorMPGD &inputDet, Uniformity::AnalysisSetupUniformity inputSetup){
            setAnalysisParameters(inputSetup);
            setClusters(strInputRootFileName, inputDet);
            return;
        };
        
    private:
        //Actions - Methods that Do Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        //Check if Cluster Passes selection stored in aSetupUniformity? True -> Passes; False -> Fails
        bool clusterPassesSelection(Uniformity::Cluster &inputClust);
        
        //Getters - Methods that Get (i.e. Return) Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        
        //Printers - Methods that Print Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        
        //Setters - Methods that Set Something
        //------------------------------------------------------------------------------------------------------------------------------------------
        
    }; //End class ClusterSelector
} //End namespace Uniformity


#endif /* defined(____ClusterSelector__) */
