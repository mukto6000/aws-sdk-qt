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

#ifndef QTAWS_GRAFANAREQUEST_P_H
#define QTAWS_GRAFANAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class GrafanaRequest;

class GrafanaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GrafanaRequest::Action action; ///< Grafana action to be performed.
    QString apiVersion;        ///< Grafana API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Grafana request (query string) parameters. @todo?

    GrafanaRequestPrivate(const GrafanaRequest::Action action, GrafanaRequest * const q);
    GrafanaRequestPrivate(const GrafanaRequestPrivate &other, GrafanaRequest * const q);

    static QString toString(const GrafanaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GrafanaRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
