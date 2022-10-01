// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMRESOURCEREQUEST_H
#define QTAWS_REMOVETAGSFROMRESOURCEREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class RemoveTagsFromResourceRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RemoveTagsFromResourceRequest : public DirectoryServiceRequest {

public:
    RemoveTagsFromResourceRequest(const RemoveTagsFromResourceRequest &other);
    RemoveTagsFromResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromResourceRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
