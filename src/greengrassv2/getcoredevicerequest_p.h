/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETCOREDEVICEREQUEST_P_H
#define QTAWS_GETCOREDEVICEREQUEST_P_H

#include "greengrassv2request_p.h"
#include "getcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetCoreDeviceRequest;

class QTAWS_EXPORT GetCoreDeviceRequestPrivate : public GreengrassV2RequestPrivate {

public:
    GetCoreDeviceRequestPrivate(const GreengrassV2Request::Action action,
                                   GetCoreDeviceRequest * const q);
    GetCoreDeviceRequestPrivate(const GetCoreDeviceRequestPrivate &other,
                                   GetCoreDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif