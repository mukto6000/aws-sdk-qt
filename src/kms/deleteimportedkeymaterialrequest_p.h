// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTEDKEYMATERIALREQUEST_P_H
#define QTAWS_DELETEIMPORTEDKEYMATERIALREQUEST_P_H

#include "kmsrequest_p.h"
#include "deleteimportedkeymaterialrequest.h"

namespace QtAws {
namespace Kms {

class DeleteImportedKeyMaterialRequest;

class DeleteImportedKeyMaterialRequestPrivate : public KmsRequestPrivate {

public:
    DeleteImportedKeyMaterialRequestPrivate(const KmsRequest::Action action,
                                   DeleteImportedKeyMaterialRequest * const q);
    DeleteImportedKeyMaterialRequestPrivate(const DeleteImportedKeyMaterialRequestPrivate &other,
                                   DeleteImportedKeyMaterialRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImportedKeyMaterialRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
