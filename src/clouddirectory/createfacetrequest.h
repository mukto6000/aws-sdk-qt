// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFACETREQUEST_H
#define QTAWS_CREATEFACETREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateFacetRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateFacetRequest : public CloudDirectoryRequest {

public:
    CreateFacetRequest(const CreateFacetRequest &other);
    CreateFacetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
