/*
 *  cBioGroupManager.h
 *  Avida
 *
 *  Created by David on 11/5/09.
 *  Copyright 2009 Michigan State University. All rights reserved.
 *
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; version 2
 *  of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#ifndef cBioGroupManager_h
#define cBioGroupManager_h

#ifndef cString_h
#include "cString.h"
#endif

class cBioGroup;
class cBioUnit;


class cBioGroupManager
{
  friend class cClassificationManager;
private:
  cString m_role;
  
  
public:
  cBioGroupManager() { ; }
  virtual ~cBioGroupManager() = 0;
  
  virtual cBioGroup* ClassifyNewBioUnit(cBioUnit* bu) = 0;
  
  
protected:
  inline const cString& GetRole() const { return m_role; }
  
  
private:
  void SetRole(const cString& role) { m_role = role; }
};


#endif
