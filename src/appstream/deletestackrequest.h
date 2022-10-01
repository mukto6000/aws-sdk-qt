// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKREQUEST_H
#define QTAWS_DELETESTACKREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteStackRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteStackRequest : public AppStreamRequest {

public:
    DeleteStackRequest(const DeleteStackRequest &other);
    DeleteStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
