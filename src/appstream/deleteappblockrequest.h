// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPBLOCKREQUEST_H
#define QTAWS_DELETEAPPBLOCKREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteAppBlockRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteAppBlockRequest : public AppStreamRequest {

public:
    DeleteAppBlockRequest(const DeleteAppBlockRequest &other);
    DeleteAppBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppBlockRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
