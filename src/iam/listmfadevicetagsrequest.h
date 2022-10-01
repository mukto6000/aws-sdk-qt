// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICETAGSREQUEST_H
#define QTAWS_LISTMFADEVICETAGSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListMFADeviceTagsRequestPrivate;

class QTAWSIAM_EXPORT ListMFADeviceTagsRequest : public IamRequest {

public:
    ListMFADeviceTagsRequest(const ListMFADeviceTagsRequest &other);
    ListMFADeviceTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMFADeviceTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
