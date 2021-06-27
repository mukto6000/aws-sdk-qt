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

#ifndef QTAWS_EC2REQUEST_P_H
#define QTAWS_EC2REQUEST_P_H

namespace QtAws {
namespace EC2 {

class Ec2Request;

class Ec2RequestPrivate {

public:
    Ec2Request::Action action; ///< EC2 action to be performed.
    QString apiVersion;        ///< EC2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EC2 request (query string) parameters. @todo?

    Ec2RequestPrivate(const Ec2Request::Action action, Ec2Request * const q);
    Ec2RequestPrivate(const Ec2RequestPrivate &other, Ec2Request * const q);

    static QString toString(const Ec2Request::Action &action);

protected:
    Ec2Request * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(Ec2Request)

};

} // namespace EC2
} // namespace QtAws

#endif
