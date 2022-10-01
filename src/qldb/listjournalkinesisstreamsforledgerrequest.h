// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERREQUEST_H
#define QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalKinesisStreamsForLedgerRequestPrivate;

class QTAWSQLDB_EXPORT ListJournalKinesisStreamsForLedgerRequest : public QldbRequest {

public:
    ListJournalKinesisStreamsForLedgerRequest(const ListJournalKinesisStreamsForLedgerRequest &other);
    ListJournalKinesisStreamsForLedgerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJournalKinesisStreamsForLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
