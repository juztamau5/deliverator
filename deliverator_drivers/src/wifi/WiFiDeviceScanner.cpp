/*
 *      Copyright (C) 2016 juztamau5
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this Program; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "WiFiDeviceScanner.h"

//#include "ros/ros.h"

#include <utility>

using namespace deliverator;

std::vector<WiFiDevice> WiFiDeviceScanner::ScanDevices()
{
  std::vector<WiFiDevice> devices;

  // TODO
  WiFiDevice device;
  devices.emplace_back(std::move(device));

  return devices;
}
