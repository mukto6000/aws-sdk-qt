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

#ifndef QTAWS_PRICINGCLIENT_P_H
#define QTAWS_PRICINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Pricing {

class PricingClient;

class QTAWS_EXPORT PricingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    PricingClientPrivate(PricingClient * const q);

private:
    Q_DECLARE_PUBLIC(PricingClient)
    Q_DISABLE_COPY(PricingClientPrivate)

};

} // namespace Pricing
} // namespace QtAws

#endif
