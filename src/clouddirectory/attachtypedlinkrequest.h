// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTYPEDLINKREQUEST_H
#define QTAWS_ATTACHTYPEDLINKREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachTypedLinkRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachTypedLinkRequest : public CloudDirectoryRequest {

public:
    AttachTypedLinkRequest(const AttachTypedLinkRequest &other);
    AttachTypedLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachTypedLinkRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
