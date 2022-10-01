// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETREQUEST_H
#define QTAWS_DELETEDATASETREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteDatasetRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteDatasetRequest : public LookoutEquipmentRequest {

public:
    DeleteDatasetRequest(const DeleteDatasetRequest &other);
    DeleteDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
