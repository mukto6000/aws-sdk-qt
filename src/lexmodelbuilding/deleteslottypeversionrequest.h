// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEVERSIONREQUEST_H
#define QTAWS_DELETESLOTTYPEVERSIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteSlotTypeVersionRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteSlotTypeVersionRequest : public LexModelBuildingRequest {

public:
    DeleteSlotTypeVersionRequest(const DeleteSlotTypeVersionRequest &other);
    DeleteSlotTypeVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotTypeVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
