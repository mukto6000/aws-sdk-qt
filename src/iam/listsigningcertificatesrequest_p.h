/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTSIGNINGCERTIFICATESREQUEST_P_H
#define QTAWS_LISTSIGNINGCERTIFICATESREQUEST_P_H

#include "iamrequest_p.h"
#include "listsigningcertificatesrequest.h"

namespace QtAws {
namespace IAM {

class ListSigningCertificatesRequest;

class QTAWS_EXPORT ListSigningCertificatesRequestPrivate : public IAMRequestPrivate {

public:
    ListSigningCertificatesRequestPrivate(const IAMRequest::Action action,
                                   ListSigningCertificatesRequest * const q);
    ListSigningCertificatesRequestPrivate(const ListSigningCertificatesRequestPrivate &other,
                                   ListSigningCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSigningCertificatesRequest)

};

} // namespace IAM
} // namespace QtAws

#endif