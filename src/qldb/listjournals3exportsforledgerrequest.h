// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSFORLEDGERREQUEST_H
#define QTAWS_LISTJOURNALS3EXPORTSFORLEDGERREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsForLedgerRequestPrivate;

class QTAWSQLDB_EXPORT ListJournalS3ExportsForLedgerRequest : public QldbRequest {

public:
    ListJournalS3ExportsForLedgerRequest(const ListJournalS3ExportsForLedgerRequest &other);
    ListJournalS3ExportsForLedgerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJournalS3ExportsForLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
