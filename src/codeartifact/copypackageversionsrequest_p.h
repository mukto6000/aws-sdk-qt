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

#ifndef QTAWS_COPYPACKAGEVERSIONSREQUEST_P_H
#define QTAWS_COPYPACKAGEVERSIONSREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "copypackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CopyPackageVersionsRequest;

class QTAWS_EXPORT CopyPackageVersionsRequestPrivate : public CodeArtifactRequestPrivate {

public:
    CopyPackageVersionsRequestPrivate(const CodeArtifactRequest::Action action,
                                   CopyPackageVersionsRequest * const q);
    CopyPackageVersionsRequestPrivate(const CopyPackageVersionsRequestPrivate &other,
                                   CopyPackageVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyPackageVersionsRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif