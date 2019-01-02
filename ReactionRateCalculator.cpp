// Program : ReactionRateCalculator.cpp
// Author  : Philip Adsley (2019)
// Descrip : Calculates Thermonuclear reaction rates using a Monte-Carlo
//           method to sample over error distributions - based on RatesMC by Richard Longland
// Usage   : ./ReactionRateCalculator
//
/* ToDo:

 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <math.h>

//include GSL special function libraries and other useful numerical gubbins
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_statistics.h>
#include <gsl/gsl_sf_exp.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_sf_coulomb.h>
#include <gsl/gsl_sf_log.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_odeiv.h>

//include ROOT libraries for outputting data
#include <TMath.h>
#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TH1.h>
#include <TH2.h>

#include "ReactionRateCalculator.h"

int main()
{
    //Print intoduction screen
    WelcomeScreen();
    
    //Define the output files
    
    //Open a log file for the output
    
    //Read in the resonance parameters
    
}

void WelcomeScreen()
{
    printf("Hello! This code will hopefully run some astrophysical reaction rate calculations for you.\n\nIf it doesn't, e-mail me at padsley@gmail.com or better yet leave a comment on my Github repository.\n\n");
}