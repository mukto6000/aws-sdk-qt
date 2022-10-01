// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPERMISSIONSREQUEST_H
#define QTAWS_UPDATEIMAGEPERMISSIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateImagePermissionsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT UpdateImagePermissionsRequest : public AppStreamRequest {

public:
    UpdateImagePermissionsRequest(const UpdateImagePermissionsRequest &other);
    UpdateImagePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImagePermissionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
