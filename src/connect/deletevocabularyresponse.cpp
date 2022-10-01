// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevocabularyresponse.h"
#include "deletevocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteVocabularyResponse
 * \brief The DeleteVocabularyResponse class provides an interace for Connect DeleteVocabulary responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::deleteVocabulary
 */

/*!
 * Constructs a DeleteVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVocabularyResponse::DeleteVocabularyResponse(
        const DeleteVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DeleteVocabularyResponsePrivate(this), parent)
{
    setRequest(new DeleteVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVocabularyRequest * DeleteVocabularyResponse::request() const
{
    Q_D(const DeleteVocabularyResponse);
    return static_cast<const DeleteVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DeleteVocabulary \a response.
 */
void DeleteVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DeleteVocabularyResponsePrivate
 * \brief The DeleteVocabularyResponsePrivate class provides private implementation for DeleteVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteVocabularyResponsePrivate object with public implementation \a q.
 */
DeleteVocabularyResponsePrivate::DeleteVocabularyResponsePrivate(
    DeleteVocabularyResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DeleteVocabulary response element from \a xml.
 */
void DeleteVocabularyResponsePrivate::parseDeleteVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
