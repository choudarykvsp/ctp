/*
 *            Copyright 2009-2012 The VOTCA Development Team
 *                       (http://www.votca.org)
 *
 *      Licensed under the Apache License, Version 2.0 (the "License")
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


#include <votca/ctp/toolfactory.h>
#include "votca_config.h"
#include "tools/molpol.h"
#include "tools/pdb2map.h"
#include "tools/coupling.h"
#include "tools/log2mps.h"
#include "tools/ptopreader.h"
#include "tools/pdb2top.h"
//#include "tools/qmsandbox.h"



namespace votca { namespace ctp {

void QMToolFactory::RegisterAll(void)
{
        QMTools().Register<MolPolTool>         ("molpol");
        QMTools().Register<PDB2Map>            ("pdb2map");
        QMTools().Register<Coupling>           ("coupling");
        QMTools().Register<Log2Mps>            ("log2mps");
        QMTools().Register<PtopReader>         ("ptopreader");
        //QMTools().Register<QMSandbox>          ("qmsandbox");
        QMTools().Register<PDB2Top>            ("pdb2top");

        
}

}}
