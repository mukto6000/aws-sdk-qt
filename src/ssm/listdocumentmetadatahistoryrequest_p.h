// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTMETADATAHISTORYREQUEST_P_H
#define QTAWS_LISTDOCUMENTMETADATAHISTORYREQUEST_P_H

#include "ssmrequest_p.h"
#include "listdocumentmetadatahistoryrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentMetadataHistoryRequest;

class ListDocumentMetadataHistoryRequestPrivate : public SsmRequestPrivate {

public:
    ListDocumentMetadataHistoryRequestPrivate(const SsmRequest::Action action,
                                   ListDocumentMetadataHistoryRequest * const q);
    ListDocumentMetadataHistoryRequestPrivate(const ListDocumentMetadataHistoryRequestPrivate &other,
                                   ListDocumentMetadataHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentMetadataHistoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
