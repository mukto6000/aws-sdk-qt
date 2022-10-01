// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVODSOURCEREQUEST_H
#define QTAWS_DELETEVODSOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteVodSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteVodSourceRequest : public MediaTailorRequest {

public:
    DeleteVodSourceRequest(const DeleteVodSourceRequest &other);
    DeleteVodSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
