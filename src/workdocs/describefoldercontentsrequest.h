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

#ifndef QTAWS_DESCRIBEFOLDERCONTENTSREQUEST_H
#define QTAWS_DESCRIBEFOLDERCONTENTSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeFolderContentsRequestPrivate;

class QTAWS_EXPORT DescribeFolderContentsRequest : public WorkDocsRequest {

public:
    DescribeFolderContentsRequest(const DescribeFolderContentsRequest &other);
    DescribeFolderContentsRequest();

    virtual bool isValid() const;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(DescribeFolderContentsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif