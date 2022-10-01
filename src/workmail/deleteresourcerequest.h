// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEREQUEST_H
#define QTAWS_DELETERESOURCEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteResourceRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteResourceRequest : public WorkMailRequest {

public:
    DeleteResourceRequest(const DeleteResourceRequest &other);
    DeleteResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
