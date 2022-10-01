// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTITIONREQUEST_H
#define QTAWS_UPDATEPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdatePartitionRequestPrivate;

class QTAWSGLUE_EXPORT UpdatePartitionRequest : public GlueRequest {

public:
    UpdatePartitionRequest(const UpdatePartitionRequest &other);
    UpdatePartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
