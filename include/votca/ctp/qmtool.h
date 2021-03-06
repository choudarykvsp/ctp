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


#ifndef __VOTCA_CTP_QMTOOL__H
#define __VOTCA_CTP_QMTOOL__H


#include <votca/tools/property.h>
#include <votca/ctp/qmcalculator.h>
#include <boost/format.hpp>

namespace votca { namespace ctp {

class QMTool : public QMCalculator
{
public:

    QMTool() { };
    virtual        ~QMTool() { };

    virtual std::string  Identify() = 0;
    virtual void    Initialize(votca::tools::Property *options) = 0;    
    virtual bool    Evaluate() = 0;
    virtual bool    EndEvaluate() { return true; }

protected:
    
private:
    using QMCalculator::EndEvaluate;

};

}}

#endif /* _VOTCA_CTP_QMTOOL_H */
